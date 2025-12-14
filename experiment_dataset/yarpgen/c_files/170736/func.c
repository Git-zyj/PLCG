/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170736
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
    var_15 = min((-995325014563482634LL), (-2743569176671517096LL));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) max((var_16), (min((((arr_8 [10LL] [i_1] [i_4] [i_3]) / (arr_3 [i_2]))), (min((-2743569176671517096LL), (-995325014563482646LL)))))));
                                var_17 = ((9223372036854775803LL) ^ (-8370892339902197062LL));
                                var_18 = (+(-6936176104909580108LL));
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_1] [i_4] = ((3906453029836654816LL) - (-4628119004983458829LL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (long long int i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_5] = ((/* implicit */long long int) ((3270513183516571145LL) <= ((-9223372036854775807LL - 1LL))));
                                var_19 = ((/* implicit */long long int) max((var_19), (arr_16 [i_1] [i_5] [i_6 + 1])));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_1] [i_2] = arr_2 [i_1];
                    var_20 = 9223372036854775807LL;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_9 = 2; i_9 < 14; i_9 += 1) 
                {
                    for (long long int i_10 = 2; i_10 < 15; i_10 += 4) 
                    {
                        {
                            var_21 = (+(-6429605498257549119LL));
                            arr_33 [i_7] [i_7] [i_9 - 1] [11LL] = 6936176104909580108LL;
                            arr_34 [i_7] = ((long long int) -2743569176671517121LL);
                            /* LoopSeq 2 */
                            for (long long int i_11 = 1; i_11 < 14; i_11 += 1) /* same iter space */
                            {
                                arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] = (+((+(-2648986220210991519LL))));
                                arr_40 [i_7] [i_8] [i_8] [10LL] [i_7] [i_11 + 4] [i_11 + 2] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-2947748136442806051LL) : (-2655781683397856777LL));
                                arr_41 [i_7] [i_7] [i_9] [i_9 - 1] [7LL] = min((-8619333077633688044LL), (((((/* implicit */_Bool) -5592573732255736155LL)) ? (-6590025144308516932LL) : (-6811978747297234577LL))));
                                arr_42 [i_7] [i_7] = min((9223372036854775792LL), (6936176104909580104LL));
                            }
                            for (long long int i_12 = 1; i_12 < 14; i_12 += 1) /* same iter space */
                            {
                                var_22 = ((long long int) -1064411911226716825LL);
                                var_23 = var_12;
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((9223372036854775807LL) <= (-4628119004983458814LL))))));
                    /* LoopNest 2 */
                    for (long long int i_14 = 3; i_14 < 16; i_14 += 1) 
                    {
                        for (long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                        {
                            {
                                var_25 = ((((/* implicit */long long int) ((/* implicit */int) ((-3511057659335977112LL) <= (-1033984670711809684LL))))) - (((((/* implicit */_Bool) max((-335558747319596468LL), (-899947808620412687LL)))) ? (-5852350745575680191LL) : (-1033984670711809684LL))));
                                arr_52 [i_7] [i_7] [i_13] [i_14] [i_15] = ((((/* implicit */_Bool) 2370957192592669218LL)) ? (4467570830351532032LL) : (2648480447289370584LL));
                                var_26 += ((/* implicit */long long int) ((-5852350745575680204LL) <= (-16777216LL)));
                                var_27 = -5647143553453400134LL;
                                var_28 = ((((/* implicit */_Bool) 32LL)) ? (max((4350149997946474561LL), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -4802374838298218949LL)) || (((/* implicit */_Bool) -4131753171174833997LL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        var_29 = (+(4628119004983458814LL));
                        arr_55 [2LL] [i_8] [i_7] [i_16] = max((-5741444916903820527LL), (-2305843009213693952LL));
                        arr_56 [i_7] [i_13] [10LL] [i_8] [i_7] = ((/* implicit */long long int) ((-16777225LL) <= (9223372036854775807LL)));
                    }
                }
                var_30 = ((/* implicit */long long int) max((var_30), (min((-8447195500447204350LL), (-4350149997946474539LL)))));
            }
        } 
    } 
}
