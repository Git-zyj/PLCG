/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153142
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((unsigned int) (unsigned short)63431)) < (((/* implicit */unsigned int) -660266939)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2043280619)) ? (var_7) : (var_12)))) ? (((/* implicit */long long int) min((-1678393984), (var_12)))) : ((-(var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((8365159730011133294LL), (((/* implicit */long long int) var_0))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_21 *= ((/* implicit */signed char) ((long long int) min((max((((/* implicit */long long int) -23774536)), (-551284980208736924LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)0)) : (255)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = -478027029;
                            var_23 &= var_14;
                            arr_10 [i_0 + 2] [i_0] [i_1] [i_2 + 1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_18)))) == (((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [i_3])) && (((/* implicit */_Bool) var_9)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max((min((1152921504606715904ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((int) arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_1 + 2]))))))));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((-256) / (2147483647)))) ? (15535826702785720371ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [4ULL] [i_4]))))), (max((max((15535826702785720371ULL), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) arr_12 [i_1] [6LL] [i_1] [i_1 + 1])))))))));
                }
                for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    arr_18 [(unsigned short)5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min((var_18), (var_16)))), (var_14))))));
                    var_26 -= ((/* implicit */signed char) min(((-2147483647 - 1)), (((/* implicit */int) (((-2147483647 - 1)) >= (-1918267191))))));
                }
            }
        } 
    } 
}
