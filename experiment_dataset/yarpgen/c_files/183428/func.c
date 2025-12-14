/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183428
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
    var_18 = ((/* implicit */long long int) 2452664041013397729ULL);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) == (((((/* implicit */_Bool) ((var_10) % (((/* implicit */long long int) var_9))))) ? (min((18219759932961835328ULL), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((unsigned int) 18219759932961835330ULL)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((_Bool) arr_1 [i_0]))))), (226984140747716291ULL)));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 2029697848771890730ULL)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (_Bool)1)))))), (18219759932961835317ULL)));
            var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_2)) / (((/* implicit */int) arr_0 [7ULL]))))))), (((((_Bool) var_6)) ? (16417046224937660883ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8)))))));
            var_22 = ((/* implicit */long long int) var_0);
        }
        for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_23 = ((/* implicit */signed char) var_4);
            var_24 &= (~(max((((((/* implicit */_Bool) (short)-4722)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_10))), (((/* implicit */long long int) min((var_16), (((/* implicit */unsigned char) var_15))))))));
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_25 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) (unsigned char)40)) + (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)4721)) : (((/* implicit */int) var_16)))))));
                var_26 += ((/* implicit */long long int) ((short) max((((/* implicit */unsigned long long int) max((var_13), (((/* implicit */int) (unsigned short)53576))))), (arr_10 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2]))));
                arr_11 [(short)8] = ((/* implicit */signed char) min((((/* implicit */short) (_Bool)0)), ((short)-18903)));
                arr_12 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [(_Bool)1])) / (min((((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_0 - 3] [i_0 + 1])), (((((/* implicit */_Bool) 18219759932961835328ULL)) ? (18219759932961835342ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8)))))))));
            }
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 4; i_5 < 20; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) arr_16 [i_0 - 2] [(_Bool)1] [i_4] [i_5] [20LL] [i_6]);
                            arr_20 [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_4])), (((unsigned short) 1006632960))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) ((signed char) 4294967295U));
                var_29 = ((((((/* implicit */int) ((_Bool) var_0))) != (((/* implicit */int) (unsigned char)228)))) ? (((/* implicit */int) ((unsigned char) ((unsigned short) 18219759932961835326ULL)))) : (((int) ((unsigned char) arr_5 [i_4]))));
                var_30 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_14)) ? (-8111359786090949351LL) : (((/* implicit */long long int) arr_4 [i_0 + 1] [i_4])))));
            }
            arr_21 [i_0] = ((/* implicit */_Bool) min(((-(((/* implicit */int) (short)18902)))), (((/* implicit */int) var_12))));
        }
        arr_22 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((signed char) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_7))))), (((((/* implicit */_Bool) arr_18 [(_Bool)1] [(signed char)16])) ? (((/* implicit */int) (unsigned short)53552)) : (((/* implicit */int) var_1))))));
    }
}
