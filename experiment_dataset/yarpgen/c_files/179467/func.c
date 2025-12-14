/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179467
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_20 = 179787689U;
        var_21 = ((/* implicit */signed char) (_Bool)1);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((unsigned short) (signed char)-58)))))) > (arr_0 [i_0])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            var_23 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-24993)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58))) : (1023U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-58)) && (((/* implicit */_Bool) 1073741822U))))))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_1 + 2] [i_0 + 1]))));
            var_25 = ((/* implicit */long long int) ((signed char) arr_4 [i_1 - 1] [i_1 + 1] [i_0 - 1]));
            arr_5 [i_0 - 1] [i_1 - 2] [i_1] = ((/* implicit */_Bool) ((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))));
        }
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
            {
                var_26 -= ((/* implicit */unsigned char) (unsigned short)32482);
                var_27 = ((/* implicit */unsigned short) arr_4 [2U] [i_2] [i_2]);
                var_28 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0 + 1])) + (((/* implicit */int) arr_6 [i_0 - 1]))));
                var_29 = arr_1 [i_0 - 1];
            }
            /* vectorizable */
            for (short i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
            {
                arr_14 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) arr_11 [10U] [(unsigned char)21])) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) (~(arr_2 [(unsigned char)1] [5])))) : (8963952030135287410ULL)));
                /* LoopSeq 2 */
                for (short i_5 = 2; i_5 < 18; i_5 += 3) 
                {
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) arr_11 [(short)14] [i_5]))));
                    arr_18 [i_0] [i_0] [(_Bool)1] [i_5 + 4] [i_4] = ((unsigned int) 8963952030135287410ULL);
                }
                for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) 
                {
                    arr_21 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (unsigned char)248)))));
                    var_31 ^= ((/* implicit */unsigned int) arr_16 [i_0]);
                }
                var_32 &= ((unsigned char) arr_7 [i_0 + 1] [i_2]);
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_19 [i_0 - 1]))) ? (((((/* implicit */_Bool) arr_12 [i_4] [2] [i_0])) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) (unsigned short)11863)))) : (((/* implicit */int) ((_Bool) arr_11 [i_4] [i_0]))))))));
                var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_4])) > (((/* implicit */int) (signed char)45))));
            }
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                var_35 = ((/* implicit */long long int) arr_12 [(unsigned short)21] [i_2] [(unsigned char)21]);
                arr_26 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_7])) ? (((((/* implicit */_Bool) (short)9231)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25038))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0])))));
            }
            arr_27 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_10 [(signed char)6] [i_2])), (((int) arr_15 [i_0 + 1] [i_0 - 1]))));
            var_36 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ^ ((+(((/* implicit */int) arr_24 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
        }
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
        {
            arr_30 [i_0] = ((/* implicit */short) ((_Bool) (+(((((/* implicit */_Bool) 1073741822U)) ? (4294967295U) : (3221225474U))))));
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (short)12785))));
                arr_33 [i_9] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8149))) <= (arr_3 [i_0 + 1])))), ((+(((/* implicit */int) (_Bool)1))))));
            }
            arr_34 [15U] [i_0] = ((/* implicit */short) (+(max((max((arr_2 [17LL] [i_8]), (4872609815160018588LL))), (((/* implicit */long long int) arr_10 [i_0 - 1] [i_0 + 1]))))));
            var_38 = ((/* implicit */unsigned int) ((int) (short)-1));
            var_39 = ((/* implicit */unsigned char) (+((+(max((arr_2 [i_0] [i_8]), (((/* implicit */long long int) arr_17 [i_8]))))))));
        }
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
        {
            var_40 *= ((/* implicit */unsigned int) ((unsigned char) ((((245938766U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned short)6] [i_10]))))) + (arr_22 [20U] [i_0 + 1]))));
            var_41 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_31 [i_10] [(_Bool)1] [i_0 - 1] [i_0 + 1]))));
        }
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
        {
            var_42 = (~(-4700629178581516478LL));
            /* LoopNest 2 */
            for (unsigned int i_12 = 2; i_12 < 20; i_12 += 2) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1402041096U))))) : (((/* implicit */int) ((signed char) arr_41 [i_0 + 1])))));
                        arr_45 [i_0] [i_13] [i_13] [i_11] = ((/* implicit */short) (unsigned short)216);
                    }
                } 
            } 
        }
    }
    var_44 -= var_8;
}
