/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121955
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        var_13 = (+(((max((arr_0 [i_3]), (-1294604848))) ^ (-1927394324))));
                        var_14 -= ((/* implicit */signed char) min((min((arr_3 [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (short)8192)) : (arr_0 [i_2])))))), (((/* implicit */unsigned long long int) (unsigned short)4))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) < (7912629331831560797LL)))) : (((int) (unsigned char)231))));
                        arr_12 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((6625701725308682454ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1369816852)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (6625701725308682464ULL)))));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_1);
}
