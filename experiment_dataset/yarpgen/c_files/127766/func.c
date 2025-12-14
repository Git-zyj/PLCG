/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127766
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
    var_11 = ((/* implicit */unsigned int) 4494803534348288LL);
    var_12 = ((((/* implicit */_Bool) (unsigned short)35206)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-37)) & (-1073741824)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_3)) << (((846844314U) - (846844312U)))))))) : (((((/* implicit */_Bool) max(((signed char)-54), ((signed char)-93)))) ? (((((/* implicit */_Bool) (signed char)107)) ? (1073741823ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4227))))) : (((/* implicit */unsigned long long int) 186009289U)))));
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)23751))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_6)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [2ULL] [(unsigned char)13] = ((/* implicit */int) var_2);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_16 [i_3] [i_0] [i_3] [i_2 - 1] [i_1] [i_0] [i_0] = ((/* implicit */int) (-(((((/* implicit */long long int) -1168538668)) | (((((/* implicit */_Bool) var_1)) ? (3999461185138066759LL) : (((/* implicit */long long int) 1165821024U))))))));
                                var_14 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [(unsigned short)1] [1LL])) / (arr_14 [i_0] [i_0] [i_0 - 2] [5U] [5U] [i_0] [i_0 + 1]))))))) / (((((10097299648306481747ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_13 [(unsigned short)10] [i_1] [i_2] [(unsigned short)10] [(unsigned short)10])) : (((((/* implicit */_Bool) arr_14 [(unsigned short)2] [(unsigned short)2] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 3] [(unsigned short)2])) ? (((/* implicit */int) arr_4 [(signed char)13] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)32768))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0 - 1] [i_1] [i_0 - 1] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-115)) ? (arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_0] [(unsigned char)10] [i_1] [i_2 + 2] [i_2]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((449314305207515608ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
