/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171072
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
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_6)), (var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) -630644643385455022LL);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [(signed char)10] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) - (((((/* implicit */_Bool) 2908217284U)) ? (-149266580) : (((/* implicit */int) (unsigned char)255)))))) << (min((((/* implicit */unsigned long long int) ((_Bool) 7955110058600755696ULL))), (arr_1 [6ULL])))));
                            arr_11 [i_0] [i_1] [i_3] [i_2 + 1] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_2] [i_2 + 1] [i_2 + 1] [2ULL] [i_2] [i_2 + 1]) + (((/* implicit */unsigned int) var_0))))) ? (max((arr_7 [i_2] [i_2 + 1] [i_2 + 1]), (((/* implicit */unsigned long long int) (unsigned short)18303)))) : ((-(arr_7 [i_2] [i_2] [i_2 + 1])))));
                            arr_12 [i_3] = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) (+(-630644643385455022LL))))));
                        }
                    } 
                } 
                arr_13 [i_0] [(unsigned short)12] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((signed char) (unsigned char)114))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : ((-(arr_8 [i_1] [(unsigned char)14] [i_1] [i_0] [i_1] [i_0]))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                arr_14 [10LL] = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) 1636148812369191123LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0])), (-630644643385455051LL)))))))) : (var_4)));
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_24 [8U] [8U] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [(unsigned short)15] [i_4] [(unsigned short)15] [i_6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) arr_20 [i_0] [14LL] [i_4] [i_4] [i_4])))));
                                var_21 *= ((/* implicit */_Bool) max(((short)-10467), (((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_4] [i_5] [i_6])) || (((var_4) <= (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [2ULL] [1LL] [i_5] [i_6]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
