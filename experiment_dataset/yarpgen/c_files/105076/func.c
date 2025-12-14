/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105076
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
    var_13 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) != (7094048036653056516ULL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        var_14 -= ((/* implicit */unsigned char) (-((+(max((((/* implicit */int) arr_3 [i_3])), (arr_2 [i_3])))))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 4; i_4 < 7; i_4 += 4) 
                        {
                            arr_14 [i_0 - 1] [i_1 - 1] [i_0] [i_1] |= ((/* implicit */_Bool) var_9);
                            var_15 = ((/* implicit */int) (unsigned char)174);
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((var_0) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [(unsigned short)2]))))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 3; i_5 < 8; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (var_4)));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((arr_15 [i_0]) == (arr_15 [i_0]))))));
                            var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0])) ? ((~(((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */int) max((var_20), ((~(((((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((var_11) - (5163808364499064891ULL))))) << (((((/* implicit */int) (unsigned char)241)) - (241)))))))));
                            arr_21 [i_0 - 2] [i_0] [i_0 + 1] [i_1] [i_2] [(_Bool)1] [i_0] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 3552571193528610102ULL)))) != (-7380925142514703681LL)));
                            var_21 *= ((/* implicit */unsigned char) ((unsigned int) 7784316147285048465LL));
                        }
                    }
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)8830)), (var_5)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), ((+(((/* implicit */int) var_8))))))) : (arr_4 [i_0] [i_1 - 1] [i_2])))));
                        var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_2 [i_0 + 1]) | (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_2 - 4])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_2 - 3] [i_2] [i_2]))) < (arr_8 [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_2] [7ULL]))))))) ? (805174766) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (2147483635) : (2034227004)))) ? (((/* implicit */int) arr_22 [i_2 - 3])) : (((/* implicit */int) (unsigned char)255))))));
                        var_24 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) (~(var_11))))), (var_10)));
                    }
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)39437)))))));
                }
            } 
        } 
        var_26 ^= ((/* implicit */int) ((unsigned short) (short)14330));
        arr_24 [i_0] &= arr_11 [i_0] [i_0 - 1] [i_0 - 1];
    }
}
