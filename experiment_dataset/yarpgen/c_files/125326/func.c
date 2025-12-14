/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125326
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [(unsigned short)11] = ((/* implicit */short) min((3388724367U), (((/* implicit */unsigned int) (short)-9189))));
        var_18 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((var_14), ((unsigned short)4784)))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (arr_1 [i_0])))), (var_3)))));
    }
    /* LoopSeq 2 */
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) arr_4 [i_1])), (arr_3 [i_1] [i_1]))), (((/* implicit */unsigned short) max((min((((/* implicit */short) var_16)), ((short)16384))), (var_6))))));
        var_20 = ((/* implicit */int) ((((((/* implicit */int) min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned short) var_1))))) <= (((/* implicit */int) (signed char)100)))) ? (var_3) : ((-(var_3)))));
        arr_5 [(unsigned short)13] [(unsigned short)13] = ((/* implicit */unsigned char) var_15);
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    {
                        arr_16 [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_13)), (((((unsigned long long int) var_1)) | (((/* implicit */unsigned long long int) ((int) var_13)))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)9191))))) ? (31525197391593472ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned short) var_7))))) ? (2147483647) : (((/* implicit */int) ((6351543133578605307LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35279)))))))))));
                            var_22 = ((/* implicit */unsigned short) 2147483647);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            arr_23 [i_4] [i_4] = ((/* implicit */long long int) var_7);
                            arr_24 [i_2] [2ULL] [i_2] [(signed char)11] [(signed char)11] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (-2147483647)));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 1) 
            {
                {
                    arr_30 [i_9] [i_8] = ((/* implicit */unsigned short) max(((+(min((4294967272U), (1041418968U))))), (((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */long long int) var_10)), (17179868928LL)))))));
                    var_23 ^= ((/* implicit */unsigned int) ((unsigned short) arr_18 [12ULL] [i_8] [i_8] [i_8]));
                    var_24 = ((unsigned short) ((unsigned long long int) 4294967265U));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            arr_35 [i_10] = ((/* implicit */unsigned long long int) var_14);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) ((_Bool) 7526379591611463412ULL))), ((short)-16624)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) var_15)), (1269611728803746666ULL)))))) : (((7526379591611463412ULL) & (18446744073709551596ULL)))));
                        var_26 = ((/* implicit */unsigned int) (signed char)25);
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_10] [(_Bool)1] [i_10]))) > (var_3))))));
            arr_44 [i_2] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((10920364482098088189ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25129))))))) | (((min((((/* implicit */unsigned int) 899285386)), (var_0))) << (((arr_9 [i_2] [i_2] [i_10]) - (90768859)))))));
            /* LoopNest 2 */
            for (long long int i_13 = 1; i_13 < 14; i_13 += 4) 
            {
                for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) (unsigned short)18005);
                        var_29 = ((/* implicit */long long int) var_14);
                        arr_51 [i_2] [i_13] [i_14] &= (+(68719476735ULL));
                        arr_52 [i_2] [i_10] [i_13 - 1] = ((/* implicit */unsigned short) ((((((17179868909LL) - (((/* implicit */long long int) ((/* implicit */int) var_2))))) - (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_13 + 2] [i_13 + 2] [(unsigned char)6] [i_13]))))) + (((/* implicit */long long int) min((var_17), (arr_37 [i_10] [i_13 - 1] [i_13]))))));
                    }
                } 
            } 
        }
        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            arr_55 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((unsigned int) 291621489911093115ULL)) : (arr_25 [i_15]))))));
            var_30 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)65509));
        }
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) 7526379591611463412ULL))));
    }
}
