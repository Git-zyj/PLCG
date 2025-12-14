/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186528
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
    for (int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) arr_0 [i_0]);
        var_15 = ((/* implicit */_Bool) arr_1 [i_0 - 2]);
    }
    var_16 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 3 */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) 18446744072635809792ULL);
        var_18 = arr_4 [(unsigned char)15];
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) ((signed char) min((arr_7 [i_2]), (((/* implicit */long long int) ((((/* implicit */int) (signed char)78)) * (((/* implicit */int) (short)-28233))))))));
        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) ((arr_5 [i_2] [i_2]) >= (arr_5 [i_2] [i_2]))))));
        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_7 [i_2])))));
        var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)28212)), ((-((-(((/* implicit */int) var_10))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) (short)16145);
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_6))));
            var_25 = ((/* implicit */unsigned short) arr_6 [(unsigned char)21]);
            var_26 = ((/* implicit */signed char) -492570245);
            /* LoopSeq 1 */
            for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                var_27 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 448065192010638160ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11)))) : (arr_6 [i_3]))));
                var_28 = ((/* implicit */short) ((int) (+((-(((/* implicit */int) arr_15 [i_5] [i_4] [i_3])))))));
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_3]))))) != (((unsigned int) var_8))));
                var_30 = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) arr_14 [i_5 + 2] [i_5 - 1])))));
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_31 = ((/* implicit */unsigned int) arr_16 [i_3] [i_6]);
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                var_32 = ((/* implicit */_Bool) 537616892);
                var_33 &= (-(((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6])) ? (arr_11 [i_3] [i_6] [i_7]) : (arr_11 [i_7] [i_6] [i_6]))));
            }
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_6] [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 17998678881698913465ULL)))))));
            /* LoopSeq 1 */
            for (int i_8 = 3; i_8 < 20; i_8 += 4) 
            {
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((min((((/* implicit */long long int) var_8)), (var_12))) >= (7316538800746591429LL)))) >= (((/* implicit */int) max((var_11), ((unsigned char)150)))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_15 [i_8 + 1] [i_9 - 1] [i_9])), (min((((/* implicit */unsigned long long int) -1706185372)), (arr_6 [i_8 + 3])))));
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_3] [i_9])) ? ((+(((/* implicit */int) arr_9 [i_8 + 3])))) : (((((/* implicit */int) arr_21 [i_8] [i_6] [i_9 - 1] [i_8 - 3])) << (((arr_11 [i_6] [i_6] [i_9 + 1]) - (6182769560630672334LL)))))));
                    var_38 = ((/* implicit */unsigned long long int) (signed char)106);
                }
                for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 2) /* same iter space */
                {
                    var_39 -= ((/* implicit */int) var_10);
                    var_40 ^= ((/* implicit */unsigned long long int) arr_27 [i_8 - 3]);
                    /* LoopSeq 4 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned int) 551831961);
                        var_42 = ((/* implicit */short) ((min((min((((/* implicit */unsigned long long int) arr_17 [i_6])), (arr_18 [i_3]))), (((/* implicit */unsigned long long int) (unsigned char)57)))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (arr_18 [i_11])))) * ((~(((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (unsigned long long int i_12 = 3; i_12 < 20; i_12 += 2) 
                    {
                        var_43 = ((/* implicit */long long int) (!(((arr_34 [(signed char)3] [(short)13] [(short)13] [i_8] [i_10] [i_12]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_10])))))));
                        var_44 &= ((/* implicit */long long int) ((arr_30 [i_3] [i_12 + 1] [i_3] [i_12] [i_12]) >= (((/* implicit */unsigned long long int) min((arr_34 [i_8] [i_8] [i_12 - 1] [i_12] [i_3] [(unsigned char)18]), (((/* implicit */unsigned int) (_Bool)1)))))));
                        var_45 *= ((/* implicit */unsigned short) arr_23 [i_3] [i_3]);
                        var_46 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned char) min(((~(18446744072635809804ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_13 - 1] [i_10 + 1] [i_8 + 1])))))));
                        var_48 = ((/* implicit */_Bool) (unsigned short)18507);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_49 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
                        var_50 |= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_13 [i_10] [4U] [11ULL] [i_3])))))))));
                        var_51 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_6] [21U] [i_10 + 1]))) != (arr_13 [i_3] [i_3] [i_3] [i_3]))))) >= (arr_11 [i_3] [i_3] [i_3]))))));
                    }
                }
                for (int i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    var_52 = ((/* implicit */unsigned short) ((var_4) << (((/* implicit */int) arr_33 [(unsigned short)22] [(unsigned short)22] [i_15] [i_6] [i_8 + 1] [i_15]))));
                    var_53 *= ((/* implicit */_Bool) (~(((unsigned int) arr_5 [i_8] [i_8 - 2]))));
                }
                var_54 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_36 [i_3] [i_3] [i_6] [i_6] [i_8]))));
            }
            var_55 = ((/* implicit */long long int) (_Bool)0);
        }
        var_56 ^= ((/* implicit */unsigned long long int) arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
    }
}
