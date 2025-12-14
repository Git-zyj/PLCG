/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178235
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
    var_10 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) -9223372036854775795LL))))) : (((/* implicit */int) var_4)))));
    var_11 &= ((/* implicit */_Bool) 9025982549601024997LL);
    var_12 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) var_4))))) : (min((18446744073709551611ULL), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (short)-1)))))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((17215049359583116902ULL) | (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */int) var_6)) | (var_1))) : (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9))) : (var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_14 -= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((var_1) >> (((var_1) - (131509915)))))) ? (((/* implicit */int) (unsigned short)4078)) : ((-(((/* implicit */int) arr_0 [i_0] [i_0])))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)140)), (3357682067U)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 7; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((signed char) ((short) arr_8 [i_2] [i_1 - 2] [i_2] [i_3 - 3]))))));
                                var_16 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_0] [i_0]))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (12050557141480856282ULL))))));
                                var_17 += (-(((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) && (((((/* implicit */int) (short)-1)) == (((/* implicit */int) var_8))))))));
                                arr_14 [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0]))) ^ (var_0)))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) arr_13 [i_0])))));
                            }
                        } 
                    } 
                } 
                var_18 *= ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3391935646U));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) min((var_8), (((/* implicit */signed char) (_Bool)1)))))) ? ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_6)))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (signed char)-62))))));
            }
        } 
    } 
}
