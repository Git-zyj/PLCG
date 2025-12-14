/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162010
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            var_11 = (unsigned short)17;
            var_12 = ((/* implicit */unsigned char) 2047LL);
        }
        var_13 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_3)))))) / (-2063LL))), (((long long int) arr_4 [i_0]))));
        var_14 = ((/* implicit */long long int) arr_3 [i_0]);
    }
    /* LoopNest 3 */
    for (signed char i_2 = 2; i_2 < 8; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((-2030LL), (-2040LL)))) == ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_4]))) | (arr_8 [i_2 + 2])))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((-2044LL), (((/* implicit */long long int) arr_12 [i_2 + 3] [i_2]))))))) || (((/* implicit */_Bool) arr_2 [i_2] [i_2]))));
                    var_17 = var_1;
                }
            } 
        } 
    } 
}
