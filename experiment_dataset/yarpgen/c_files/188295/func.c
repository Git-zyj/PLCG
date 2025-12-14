/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188295
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_12 [i_3] [i_1] [i_1] [10LL] [i_1] [15ULL] = ((/* implicit */unsigned char) (signed char)-116);
                                var_19 = ((/* implicit */short) var_7);
                                var_20 *= var_12;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned short) arr_0 [i_1]);
                                arr_21 [i_0] [i_1] [i_2] [6U] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((4784882517295209465ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4784882517295209462ULL)))))))) || (((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_14 [i_6] [i_5] [i_0])), (4784882517295209464ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 4784882517295209464ULL)))))))))));
                                var_22 = ((/* implicit */unsigned short) 289700092);
                            }
                        } 
                    } 
                    var_23 &= 522111956;
                    var_24 = ((/* implicit */unsigned long long int) (unsigned char)131);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) min((var_25), (var_5)));
    /* LoopNest 2 */
    for (unsigned char i_7 = 4; i_7 < 18; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        {
                            arr_34 [i_7 - 3] [i_7] = ((/* implicit */short) -9212264767395568438LL);
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(min((1517160287), (((/* implicit */int) (unsigned char)150))))))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))))), (min((arr_28 [i_7 - 3] [i_8] [i_9] [i_8]), (((/* implicit */unsigned long long int) (_Bool)1)))))))))));
                            var_27 = ((/* implicit */unsigned char) 4784882517295209471ULL);
                            var_28 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)60596))));
                            arr_35 [(short)8] [i_7] [(_Bool)1] [i_10] = ((/* implicit */short) min((((-1517160274) & (((/* implicit */int) var_14)))), ((-(((/* implicit */int) arr_32 [i_7] [i_8] [i_9] [i_10]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            {
                                arr_42 [i_7] = ((/* implicit */unsigned int) min((min((13661861556414342144ULL), (((/* implicit */unsigned long long int) arr_13 [(unsigned char)11] [i_8] [i_11] [i_13])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_8] [i_8] [i_12] [i_13])) >= (((/* implicit */int) arr_13 [i_7 + 1] [i_7 + 1] [i_7] [i_7 - 2])))))));
                                arr_43 [i_7 - 2] [i_7 - 2] [i_7] [i_7] [i_7] [i_7 - 3] [i_8] &= ((min(((-(4784882517295209464ULL))), (((/* implicit */unsigned long long int) arr_26 [i_7 + 1] [i_7 - 3] [i_7 + 1])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
