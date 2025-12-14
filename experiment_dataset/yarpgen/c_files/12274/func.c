/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12274
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (~(arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -505060817637703832LL)) - (15ULL)))))) ? (((((/* implicit */_Bool) (~(2147483639)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0])) <= (-505060817637703832LL))))) : (((((/* implicit */_Bool) 3107305204449811224ULL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                    arr_10 [i_0] [14LL] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) (unsigned short)25661);
                        var_17 = ((/* implicit */int) max((var_17), (((((((/* implicit */int) (!(((/* implicit */_Bool) 3107305204449811224ULL))))) ^ (1510791621))) ^ (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_7 [7] [7] [i_2 - 1])) ? (arr_12 [i_3] [10U] [i_2] [i_1] [i_0]) : (arr_12 [i_0] [i_1] [i_2 - 1] [(unsigned short)5] [i_3])))))))));
                        arr_13 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32744))) < ((+(max((((/* implicit */unsigned long long int) var_14)), (7339935608882011819ULL)))))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max(((~(-917297208))), ((-2147483647 - 1))));
        arr_17 [10LL] [i_4] = ((/* implicit */unsigned char) (((~((+(((/* implicit */int) (unsigned char)142)))))) != (((/* implicit */int) (unsigned char)65))));
        arr_18 [(signed char)0] [(signed char)0] = ((/* implicit */long long int) (unsigned char)45);
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_6 [(short)18] [(short)18])))) ? (((((/* implicit */_Bool) arr_6 [(unsigned char)16] [(unsigned char)16])) ? (((/* implicit */unsigned int) -947558846)) : (arr_6 [4U] [4U]))) : (arr_6 [6LL] [6LL]))))));
    }
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1787275004U)))))) | ((+(3107305204449811206ULL))))) : (((/* implicit */unsigned long long int) var_3))));
    var_21 = var_14;
}
