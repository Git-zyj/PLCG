/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160633
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [(unsigned char)5] [(unsigned char)5] [i_1] = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) arr_2 [i_1]))))), (arr_3 [18U] [i_1]))) <= (min((((/* implicit */unsigned int) ((var_12) / (-2079017630)))), ((~(var_6)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_6 [i_0] [9] [i_2] [i_3])) ? ((+(-2079017630))) : ((-(((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */int) arr_12 [i_0] [i_1 + 2] [19] [i_3] [(_Bool)1] [i_1])), ((+(62914560)))))));
                            var_14 &= ((/* implicit */_Bool) arr_10 [12ULL] [12ULL] [i_0] [12ULL]);
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((((/* implicit */int) max((((short) var_9)), ((short)(-32767 - 1))))), ((~(((/* implicit */int) arr_2 [(short)8])))))))));
                            var_16 *= ((/* implicit */short) min((((((/* implicit */_Bool) var_5)) ? (arr_10 [i_3 - 2] [i_3 - 1] [i_3 - 2] [5U]) : (1377637788U))), ((~((-(534738825U)))))));
                            var_17 = ((/* implicit */short) (unsigned short)61503);
                        }
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (-((~(((((/* implicit */_Bool) arr_11 [i_0] [1ULL] [i_2] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_1] [i_1])))))))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (2917329508U) : (4274709917U))), (((/* implicit */unsigned int) var_4))))) ? ((+((-(((/* implicit */int) var_2)))))) : ((+((+((-2147483647 - 1))))))));
}
