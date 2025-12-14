/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150634
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
        {
            arr_8 [i_0] = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) ((((/* implicit */int) (short)28407)) / (arr_4 [i_0])))))), (((((/* implicit */int) (short)28407)) < (arr_1 [i_0] [i_0])))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */unsigned int) (-((+(((/* implicit */int) (short)28407))))))) ^ (max((((/* implicit */unsigned int) min(((short)-28407), ((short)28407)))), (max((((/* implicit */unsigned int) (short)28407)), (var_0))))))))));
                            var_13 = ((/* implicit */int) max((((long long int) ((((/* implicit */unsigned int) var_4)) >= (4018329406U)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_3)) | (4018329405U))))));
                            var_14 = ((/* implicit */int) ((short) ((_Bool) ((long long int) var_0))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) 
            {
                var_15 = ((/* implicit */long long int) ((int) min((arr_15 [i_5 - 1] [i_5] [i_5 + 2] [i_5] [i_5 - 1]), (arr_15 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5] [i_5 - 1]))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 13; i_6 += 1) 
                {
                    for (unsigned char i_7 = 3; i_7 < 12; i_7 += 3) 
                    {
                        {
                            var_16 ^= ((/* implicit */long long int) min((((int) ((int) arr_9 [i_5]))), (((/* implicit */int) ((((arr_20 [i_1]) ^ (((/* implicit */long long int) var_8)))) >= (arr_26 [i_6] [i_6] [i_6] [i_6 - 3] [i_6]))))));
                            var_17 ^= ((/* implicit */short) max((min((((/* implicit */long long int) (short)-28407)), ((+(5368797713665737247LL))))), (((/* implicit */long long int) (~(min((276637889U), (((/* implicit */unsigned int) (short)-28398)))))))));
                            var_18 = ((unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_5] [i_5]))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0]))) / (arr_26 [i_0] [(short)0] [i_5] [i_6] [i_7])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((long long int) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (5368797713665737257LL)))))))));
                arr_27 [i_0] [i_1] [i_0] = ((/* implicit */int) (+((((~(var_9))) ^ (min((arr_26 [i_0] [i_0 + 2] [i_1] [i_1] [i_5 + 3]), (((/* implicit */long long int) (unsigned short)0))))))));
            }
            arr_28 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) min((((arr_16 [i_1] [i_1] [7LL] [i_0] [i_1] [i_1]) >> (((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */int) (short)-18250)) != (arr_23 [i_0] [i_0] [i_0] [i_0] [i_1]))))))), ((~(var_6)))));
        }
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((var_8) + (130820286)))))))), (((((/* implicit */unsigned int) arr_5 [i_0 + 1] [i_0 + 1] [(unsigned short)0])) & (276637884U)))));
            var_21 &= ((/* implicit */short) ((unsigned int) 5368797713665737247LL));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_9 = 4; i_9 < 10; i_9 += 1) /* same iter space */
            {
                var_22 = ((arr_15 [13] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) ^ (arr_15 [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0]));
                arr_35 [i_0 - 2] [i_8] [i_0] [i_8] = ((/* implicit */int) (+(var_6)));
            }
            for (int i_10 = 4; i_10 < 10; i_10 += 1) /* same iter space */
            {
                arr_40 [i_10] [i_0] [i_0] [i_0 - 2] = ((/* implicit */int) min((min((((/* implicit */long long int) (~(((/* implicit */int) (short)28407))))), (min((var_6), (5368797713665737247LL))))), (((/* implicit */long long int) ((arr_14 [i_10 - 1]) << (((arr_14 [i_10 - 4]) - (2381091763U))))))));
                var_23 = ((/* implicit */short) ((min((max((((/* implicit */long long int) (-2147483647 - 1))), (5368797713665737247LL))), (((/* implicit */long long int) ((395877871) >> (((2563995282U) - (2563995254U)))))))) == (((/* implicit */long long int) ((int) ((((/* implicit */unsigned int) var_4)) != (arr_12 [7U] [i_8] [i_8] [i_0 + 1])))))));
            }
        }
        arr_41 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */int) ((min((min((((/* implicit */long long int) 4018329408U)), (arr_9 [i_0]))), (((/* implicit */long long int) min((276637869U), (arr_15 [(unsigned short)4] [(unsigned short)4] [i_0 - 1] [i_0 + 2] [i_0 + 2])))))) >> (((min((((/* implicit */long long int) arr_34 [i_0] [i_0 + 2] [i_0])), (min((((/* implicit */long long int) var_3)), (arr_2 [i_0]))))) + (4554679149191112113LL)))))) : (((/* implicit */int) ((min((min((((/* implicit */long long int) 4018329408U)), (arr_9 [i_0]))), (((/* implicit */long long int) min((276637869U), (arr_15 [(unsigned short)4] [(unsigned short)4] [i_0 - 1] [i_0 + 2] [i_0 + 2])))))) >> (((((min((((/* implicit */long long int) arr_34 [i_0] [i_0 + 2] [i_0])), (min((((/* implicit */long long int) var_3)), (arr_2 [i_0]))))) + (4554679149191112113LL))) + (1763807337826751334LL))))));
        arr_42 [i_0] [i_0] = ((((/* implicit */long long int) min((min((((/* implicit */unsigned int) (short)28407)), (var_7))), (var_7)))) >= (max((min((arr_9 [10LL]), (((/* implicit */long long int) arr_1 [i_0 + 1] [i_0])))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (-2147483647 - 1))), (4018329413U)))))));
        var_24 = ((/* implicit */short) ((-2038496701) == (((/* implicit */int) (short)28378))));
    }
    var_25 = ((/* implicit */unsigned int) ((short) ((unsigned int) min((var_11), (((/* implicit */unsigned short) var_10))))));
}
