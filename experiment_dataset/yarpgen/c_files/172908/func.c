/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172908
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
    var_16 = ((/* implicit */unsigned long long int) var_15);
    var_17 = ((/* implicit */long long int) ((unsigned short) var_3));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((375456842U) << (((var_15) + (1507610339352288427LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -8388608LL)) : (var_5))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0 + 2]))))));
        var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) max((arr_1 [i_0 + 2]), (arr_1 [i_0])))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                arr_9 [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 375456857U)) ? (3919510459U) : (3919510440U))), (((unsigned int) 375456833U)))))));
                arr_10 [i_0] [(unsigned short)7] [i_0] = ((/* implicit */_Bool) ((short) ((min((((/* implicit */unsigned int) (signed char)64)), (4294967295U))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))))));
            }
            arr_11 [(signed char)13] [i_0] = ((/* implicit */unsigned char) var_11);
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_0 + 2] [i_0 - 2] [i_0 - 1] [i_1 - 1])), (min((((/* implicit */unsigned long long int) arr_8 [10ULL] [i_0 - 2] [i_1 - 1])), (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_6 [(unsigned char)6]))))))))));
            arr_12 [(short)0] [i_0] = ((/* implicit */long long int) (unsigned short)22916);
            var_21 -= ((/* implicit */signed char) (short)-13218);
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) -312342634))));
            arr_15 [i_0] = ((/* implicit */unsigned short) var_10);
            var_23 = ((/* implicit */signed char) var_13);
        }
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                {
                    arr_24 [i_5] [i_4] = ((unsigned short) max(((~(((/* implicit */int) arr_20 [i_4] [8U] [i_6])))), (((/* implicit */int) arr_20 [i_6] [i_5] [(unsigned short)0]))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)18437)))) * (max((((/* implicit */unsigned long long int) 375456853U)), (var_5))))), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7)))))))))));
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((long long int) min((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) arr_20 [i_4] [i_5] [i_6]))))))));
                    var_26 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 375456842U)) ? (arr_16 [i_6]) : (((/* implicit */long long int) ((unsigned int) 6357996695976922510LL))))), (((/* implicit */long long int) min((arr_20 [i_4] [i_4] [i_4]), (arr_20 [i_4] [i_5] [i_4]))))));
                }
            } 
        } 
        var_27 = ((/* implicit */int) -6357996695976922537LL);
    }
    for (signed char i_7 = 1; i_7 < 16; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_8 = 1; i_8 < 14; i_8 += 3) 
        {
            for (long long int i_9 = 4; i_9 < 16; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    {
                        arr_34 [5LL] = ((/* implicit */unsigned long long int) arr_29 [i_7] [(_Bool)1] [i_9] [11U]);
                        arr_35 [i_7 + 2] [i_7 + 2] [i_9] [i_10] = ((int) min((4182270027U), (((/* implicit */unsigned int) (_Bool)1))));
                        var_28 = ((/* implicit */int) (((~(14569496854341766451ULL))) | (((/* implicit */unsigned long long int) ((unsigned int) arr_23 [i_9] [i_8] [i_9 - 4])))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned char) arr_25 [15U]);
        arr_36 [9LL] [i_7] = ((/* implicit */short) ((((/* implicit */int) max((arr_20 [i_7 + 2] [i_7 + 1] [i_7 - 1]), (arr_20 [i_7 + 2] [i_7 + 1] [i_7 + 2])))) / (((/* implicit */int) (unsigned char)4))));
    }
}
