/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165974
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
    var_19 = ((/* implicit */short) var_10);
    var_20 ^= ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_21 += ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) << (((((/* implicit */int) (unsigned short)50161)) - (50155)))))), (((1040790021U) + (1040790021U)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            var_22 = ((/* implicit */signed char) (-(1040790003U)));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_0] [i_0] [12ULL] [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
                            var_23 = ((/* implicit */_Bool) ((long long int) 1040790021U));
                            arr_17 [i_4 - 2] [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (~(3877885794523253391ULL)));
                            var_24 += 12007878183376818843ULL;
                        }
                        var_25 = (unsigned short)60228;
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            arr_22 [i_0] [(unsigned short)1] [i_2] [i_3] [i_2] = ((/* implicit */long long int) (+(5877798601290432664ULL)));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16869610945429169849ULL)) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_2 - 2] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1] [i_3] [i_6])) ? (12007878183376818850ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_6])) < (((/* implicit */int) (_Bool)1))))))));
                            var_28 = ((/* implicit */short) 7243118288546630520LL);
                        }
                        for (unsigned char i_7 = 3; i_7 < 16; i_7 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) -1586311781);
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (12449146345718683255ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17179))))) == (8449013423518993424ULL))))));
                            arr_28 [i_0] [i_1] [i_1] [(unsigned short)5] [i_3] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 6438865890332732762ULL)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (unsigned char)135))));
                        }
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (signed char)0)))))))));
            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) 1040789995U)))));
        }
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            var_33 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((signed char)-110), (arr_31 [i_8] [i_0] [i_0])))) ? (min((3254177281U), (((/* implicit */unsigned int) arr_31 [i_8] [i_8] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_8] [i_0] [i_0]))))))));
            var_34 = ((((/* implicit */unsigned int) max((292564815), (((/* implicit */int) var_8))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_8])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10))))) ? (3254177257U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
        }
        var_35 = ((/* implicit */_Bool) (+(max((arr_19 [i_0] [i_0] [i_0] [i_0]), (arr_19 [i_0] [i_0] [i_0] [i_0])))));
        var_36 = arr_24 [(short)13] [(short)13] [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
    {
        var_37 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) != (-1994782491)));
        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) arr_25 [i_9] [2LL] [i_9] [i_9]))));
        var_39 -= ((/* implicit */unsigned short) var_4);
        arr_34 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1070384440)) ? (11235909215065713680ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9])))));
    }
    var_40 = ((/* implicit */unsigned short) var_1);
}
