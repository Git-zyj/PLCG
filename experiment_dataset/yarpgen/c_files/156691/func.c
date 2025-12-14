/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156691
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((~(arr_0 [i_0]))))))));
        var_11 = ((/* implicit */short) 3758096384U);
    }
    for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)76))));
        var_13 += (!(((/* implicit */_Bool) -5698272220235990535LL)));
    }
    for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)11239)))))))));
            arr_11 [i_2] = ((/* implicit */long long int) min((min((arr_5 [i_2]), (arr_5 [i_3]))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3])) ? (var_2) : (arr_10 [i_2])))))));
            arr_12 [(_Bool)1] [(unsigned char)2] &= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)13644)) ? (-6617997766472927750LL) : (-1157642141874890646LL))) | (-1593309029116113432LL)));
        }
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            var_15 *= ((/* implicit */unsigned long long int) arr_14 [10LL]);
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                arr_18 [13] [i_4] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((1593309029116113431LL), (((/* implicit */long long int) (unsigned char)102))))) ? (((((/* implicit */_Bool) 1593309029116113432LL)) ? (1593309029116113432LL) : (-1593309029116113432LL))) : (((((/* implicit */_Bool) arr_6 [i_5])) ? (max((((/* implicit */long long int) 1177623785)), (var_2))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_5)))))));
                arr_19 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_15 [i_2] [i_4] [i_2])), (arr_16 [i_2] [i_4] [i_5] [i_5])))), ((~(arr_14 [i_2])))));
            }
        }
        /* vectorizable */
        for (signed char i_6 = 3; i_6 < 21; i_6 += 3) 
        {
            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)156))));
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((unsigned long long int) arr_16 [i_6 + 3] [i_6 - 1] [i_6 - 3] [i_6 - 2])))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_5 [i_2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7271050064531844274ULL)) ? (((/* implicit */int) (unsigned char)50)) : (1041795177)))) : (min((((/* implicit */unsigned int) arr_15 [i_2] [i_2] [12ULL])), (arr_23 [i_2] [i_2] [i_7])))))), (((((/* implicit */_Bool) arr_6 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_7]))) : (arr_10 [i_2]))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                var_19 &= ((/* implicit */int) (-(min((((/* implicit */unsigned int) (unsigned char)152)), (1513906220U)))));
                var_20 += max(((+(min((-1593309029116113459LL), (-1593309029116113432LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)43094))))));
                var_21 = ((/* implicit */_Bool) var_5);
                var_22 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_7] [i_7])))))));
            }
        }
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                {
                    arr_33 [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) (unsigned char)107))), (max((max((((/* implicit */int) arr_20 [i_9] [i_2] [i_9])), (arr_28 [i_2] [i_9] [i_10]))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55631)))))))));
                    arr_34 [i_10] [i_2] [i_2] [i_2] = ((/* implicit */int) min(((+(arr_5 [i_9]))), (max((((/* implicit */unsigned int) (unsigned short)9904)), (arr_23 [i_10] [i_9] [i_2])))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((unsigned short) -186655848922351311LL));
        var_24 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_27 [i_2] [i_2])) - (1177623779))));
    }
    var_25 = ((/* implicit */unsigned short) var_1);
}
