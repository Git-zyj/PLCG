/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129112
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((var_16) >> (((((/* implicit */int) (signed char)-66)) + (99))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_15)))))) : (((/* implicit */int) (signed char)-56))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */long long int) (signed char)3))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_4 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)53)))) & (((/* implicit */int) (short)11979))))), ((+(arr_3 [i_0] [i_1])))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_1 [i_1]))) << (((unsigned int) var_8))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_11 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-3)) * (((/* implicit */int) (signed char)-80))))) && (((/* implicit */_Bool) var_17)));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(-1533632872756299992LL)))))))));
                        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-85))));
                    }
                    arr_15 [i_0] = ((/* implicit */unsigned short) (((~(arr_1 [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) (short)-4323)))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    arr_18 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */signed char) ((unsigned long long int) (signed char)-1));
                    var_24 &= (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (arr_9 [i_0] [i_0] [i_0] [i_0])))));
                }
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    arr_22 [i_0] [i_5] [i_0] = ((/* implicit */short) ((((unsigned long long int) ((long long int) var_4))) > (((/* implicit */unsigned long long int) arr_1 [i_5]))));
                    var_25 &= ((((/* implicit */unsigned long long int) var_1)) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_3)))) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0]))))));
                    var_26 ^= ((/* implicit */int) -1315560966371998986LL);
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((((/* implicit */_Bool) 13920807264143040268ULL)) ? (arr_1 [i_0]) : (arr_1 [i_1]))) - ((+(arr_1 [i_0]))))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */short) ((max((((var_18) + (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_6)))) - (((/* implicit */long long int) max(((-(var_9))), (var_9))))));
}
