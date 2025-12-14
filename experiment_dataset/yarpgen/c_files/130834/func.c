/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130834
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
    var_13 |= ((/* implicit */unsigned short) (+(((unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    var_14 = ((/* implicit */unsigned char) var_10);
    var_15 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_16 = var_5;
        var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) % (((/* implicit */int) ((arr_1 [i_0]) >= (((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) & (var_1)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7)))))))))) : (((/* implicit */unsigned int) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) * (((/* implicit */int) ((arr_1 [i_0]) >= (((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) & (var_1)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) var_12);
    }
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_3 [i_1]);
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
        {
            var_19 ^= ((unsigned char) arr_6 [i_1] [i_1]);
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (arr_3 [i_1])));
        }
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned char) ((signed char) max((((arr_7 [i_3] [i_4 + 2] [i_6]) + (arr_14 [i_1] [i_4] [i_4] [i_5]))), (((/* implicit */unsigned long long int) (~(var_9)))))));
                            var_21 = ((/* implicit */unsigned short) (~(var_1)));
                        }
                    } 
                } 
            } 
            arr_20 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (((-(var_5))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))))));
            var_22 = ((/* implicit */int) ((((long long int) ((((/* implicit */_Bool) (unsigned short)50167)) || (((/* implicit */_Bool) (unsigned char)156))))) + (((/* implicit */long long int) (-((~(((/* implicit */int) var_12)))))))));
        }
        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) var_7)))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_7])), (((arr_7 [i_1] [i_7] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned long long int) (-(((int) var_12))))) : ((-(arr_19 [i_1 + 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 1) 
            {
                var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_7] [i_8])), (var_8))))))) >= (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_7]))))), (((((/* implicit */_Bool) var_12)) ? (arr_14 [i_1 + 2] [i_7] [i_8] [13U]) : (((/* implicit */unsigned long long int) arr_12 [13U] [13U] [i_7] [i_1]))))))));
                var_26 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_11))))));
            }
            /* vectorizable */
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_7] [i_7] [19U] [i_7] [i_1]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_1])))))))));
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+(((arr_27 [i_9]) << (((var_9) - (6646317325912121447LL))))))))));
                arr_30 [i_9] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_7] [i_1 - 1])) ? (arr_12 [i_1] [(unsigned char)10] [i_7] [i_9]) : (arr_18 [i_1] [i_7])))) * ((+(var_5)))));
            }
        }
    }
    for (long long int i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        var_29 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_10] [i_10] [i_10] [i_10]))) ^ (arr_18 [i_10] [(unsigned short)6]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_9 [11LL] [11LL] [i_10]))) ^ (arr_3 [i_10])))))) ? (((unsigned long long int) ((unsigned char) var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_1))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_10] [i_10] [i_10] [i_10]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [2LL] [i_10]))))))))))))))));
    }
}
