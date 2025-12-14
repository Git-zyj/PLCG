/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123699
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */_Bool) 903628502U)) ? (((((/* implicit */_Bool) min((5606888662203042613LL), (((/* implicit */long long int) (unsigned short)46001))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned short)28265))))) : (((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned char)112))))) <= (((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (unsigned char)116))))))))))));
    var_14 = ((/* implicit */long long int) (unsigned short)28272);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 |= ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 4; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (903628502U))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-127))))) ? (((long long int) (-2147483647 - 1))) : (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned short)53583))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52617))) : (var_1)))) && (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned char) (signed char)109)))))))))))));
                            var_18 = ((/* implicit */unsigned char) min(((-(min((((/* implicit */unsigned long long int) var_1)), (9829641383234746978ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5539939422312892464LL)) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_1 + 2] [i_2 - 1])) : (451416408)))))))));
                            var_19 = max((((/* implicit */int) arr_11 [i_0 + 1])), (min(((~(((/* implicit */int) (unsigned short)17897)))), (((/* implicit */int) (unsigned short)45025)))));
                            arr_14 [i_0 + 1] [i_0 + 1] [i_1] [i_1 + 1] [i_2 - 2] [i_3 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)248)) >= (((/* implicit */int) var_11)))))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) -981684738))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
}
