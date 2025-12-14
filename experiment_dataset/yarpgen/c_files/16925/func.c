/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16925
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
    var_10 *= max((((/* implicit */unsigned long long int) ((int) ((_Bool) var_3)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (unsigned char)44)))))) * (min((((/* implicit */unsigned long long int) var_0)), (var_1))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */unsigned long long int) ((((_Bool) var_4)) ? (min((385510393U), (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 385510380U)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (_Bool)1)))))))) : (max((((/* implicit */unsigned long long int) ((signed char) var_1))), (((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (var_4)))))));
    var_12 = ((/* implicit */long long int) ((unsigned short) min((var_1), (((/* implicit */unsigned long long int) min((385510368U), (((/* implicit */unsigned int) var_2))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [(signed char)2] = ((/* implicit */unsigned short) var_0);
        arr_4 [i_0] = ((/* implicit */_Bool) arr_2 [(unsigned char)7] [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned short) var_0);
        var_13 = ((/* implicit */unsigned char) min((689276940119594986ULL), (((/* implicit */unsigned long long int) -109683028))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_10 [i_1] = ((/* implicit */unsigned char) arr_1 [i_1]);
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_1])) <= (((/* implicit */int) var_6))));
            arr_15 [(_Bool)1] = ((/* implicit */int) arr_9 [i_2] [i_1]);
            arr_16 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_2]))));
            arr_17 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_1] [i_2]))));
        }
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        arr_20 [i_3] |= (+(((int) 17757467133589956636ULL)));
        var_15 *= ((/* implicit */unsigned int) arr_19 [i_3]);
        /* LoopSeq 2 */
        for (long long int i_4 = 2; i_4 < 9; i_4 += 4) 
        {
            arr_25 [i_4] [i_4] |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_4 + 2] [i_4 - 2]))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 4; i_5 < 11; i_5 += 4) /* same iter space */
            {
                var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((arr_28 [i_3]) * (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((int) 2054866697))) : (((((/* implicit */_Bool) arr_22 [i_4])) ? (3909456888U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47)))))));
                arr_29 [i_5] [i_4] = ((/* implicit */short) (-(((((/* implicit */int) (signed char)-113)) ^ (((/* implicit */int) var_8))))));
                arr_30 [4LL] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_21 [(unsigned char)7] [i_3])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                arr_31 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) ((((arr_24 [i_5] [(unsigned short)4] [i_3]) > (((/* implicit */int) var_2)))) ? (arr_23 [i_4 + 3] [i_5 - 4]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1949351823U)) ? (((/* implicit */int) arr_27 [i_3] [i_3])) : (-1566087012))))));
            }
            for (unsigned short i_6 = 4; i_6 < 11; i_6 += 4) /* same iter space */
            {
                arr_35 [i_3] [i_4] [i_3] [i_3] = var_9;
                /* LoopSeq 1 */
                for (unsigned int i_7 = 4; i_7 < 11; i_7 += 4) 
                {
                    arr_38 [i_4] [i_4 - 1] [i_6] [i_3] [i_6] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-123)) ? (arr_37 [i_7 - 4] [i_4 + 1] [i_3] [(signed char)7] [i_3]) : (arr_37 [i_7 - 4] [i_4 + 1] [i_4] [i_4] [i_4])));
                    var_17 = ((/* implicit */long long int) (+(arr_37 [(_Bool)1] [i_4 + 2] [i_7 - 1] [i_6 - 3] [i_6 - 2])));
                }
            }
        }
        for (long long int i_8 = 2; i_8 < 8; i_8 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)220)) ? (3909456937U) : (((/* implicit */unsigned int) arr_28 [i_3])))));
            arr_43 [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)183))));
        }
    }
}
