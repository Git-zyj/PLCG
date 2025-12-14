/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134724
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((unsigned char) 714517589U))) ? (var_9) : (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) var_2))))))) : (max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 3580449704U)) : (var_9)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (short)31788)) != (((/* implicit */int) arr_7 [i_1 - 4]))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) min((min((((long long int) (short)32745)), (((/* implicit */long long int) arr_12 [i_2 - 1] [i_2] [i_2] [i_2 + 3] [i_1 + 3])))), (((/* implicit */long long int) arr_1 [i_0]))));
                            arr_14 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2 + 3] [i_2 + 1] [i_1 + 1] [i_1 + 1] [i_0]))) : (arr_9 [i_1 - 2] [i_1 - 4] [i_2 + 1] [i_2 + 2]))), (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */long long int) arr_2 [i_0])), (-455427627026325005LL)))))));
                            var_14 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) -455427627026325005LL))) && (((((/* implicit */int) var_2)) != (((/* implicit */int) (unsigned short)4527)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_0] [i_1 + 3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))) : (((arr_9 [i_0] [i_1] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3580449721U)) && (((/* implicit */_Bool) arr_4 [(signed char)7]))))))))));
                                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_1 - 2])) > (((/* implicit */int) arr_15 [i_1 + 2] [i_1 - 2] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 3580449706U)) ? (((/* implicit */int) (short)31761)) : (((/* implicit */int) var_6))))))) : ((~((~(arr_13 [i_6])))))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_0] [i_1] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [7U] [7U] [i_1] [i_1])) ? (1595279257U) : (var_4)))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) -1165827631)) : (4249748348U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 835008419841184831LL)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (signed char)125)))))))) ? ((+(((/* implicit */int) arr_12 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 3])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4306246319379864667LL)) ? (((/* implicit */int) (short)31310)) : (arr_16 [i_0] [i_0] [i_1 - 4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)8]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_13 [i_1])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4306246319379864667LL))));
}
