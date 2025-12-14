/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157012
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_10 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1366146074U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((unsigned long long int) 560750930165760ULL))))) ? (18446183322779385871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_11 = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)31382))))) ? ((-(((/* implicit */int) min(((short)-31382), ((short)-31382)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_3] [i_2] [i_2] [i_0] [i_3]))))), (max(((unsigned short)15747), (((/* implicit */unsigned short) (unsigned char)136))))))));
                        arr_15 [i_1 - 1] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */long long int) max(((signed char)-79), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)12)), (447188094U)))))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 4; i_5 < 11; i_5 += 4) 
        {
            arr_21 [i_4] = ((min(((~(arr_18 [i_4]))), ((~(4014722387U))))) / (((/* implicit */unsigned int) (+(arr_9 [i_4] [i_5 - 3] [i_5 - 4])))));
            arr_22 [i_4] [i_5] [i_5] = ((/* implicit */long long int) ((arr_13 [i_5] [i_5] [i_4] [i_4]) > (((((/* implicit */_Bool) min((8128318204906482642ULL), (((/* implicit */unsigned long long int) (unsigned char)21))))) ? (((/* implicit */long long int) (+(4294967295U)))) : (max((536870911LL), (((/* implicit */long long int) (short)-32743))))))));
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        arr_31 [i_4] [i_5] [i_6] [i_6] [i_7] [i_7] [i_4] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) min((arr_14 [i_4] [i_4] [i_5 - 3] [i_4] [i_7] [i_8]), (((/* implicit */int) (short)8859))))) ? (((/* implicit */int) arr_30 [i_4] [i_4] [i_6] [i_6] [i_8])) : ((((_Bool)1) ? (arr_9 [i_4] [i_4] [i_4]) : (((/* implicit */int) arr_20 [i_4])))))));
                        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (+(arr_1 [i_4] [i_4]))))));
                    }
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (unsigned short)11043))));
                    arr_32 [i_4] [i_5 - 2] [i_4] [i_7] = ((3375384926U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))));
                }
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)255)) & (((/* implicit */int) arr_6 [i_4] [(short)20]))))) ? ((~(((/* implicit */int) arr_34 [i_5] [i_6] [i_5])))) : (((/* implicit */int) (short)-3796)))))));
                        arr_38 [i_4] [(unsigned char)11] [i_6] [i_5] [i_4] = ((/* implicit */unsigned char) (~((~(((1329298929) | (((/* implicit */int) arr_25 [(unsigned char)9]))))))));
                    }
                    arr_39 [i_9] [i_4] [i_5 + 1] [i_4] [i_4] = ((/* implicit */long long int) (unsigned short)5);
                }
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) /* same iter space */
                {
                    arr_43 [i_4] [i_5 + 1] [i_5 - 4] [i_5] [i_5] = (_Bool)1;
                    arr_44 [i_4] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) arr_37 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_34 [i_4] [i_5] [i_4])) : (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) 252447605U)), (-8525390043998491125LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)32760)) && (((/* implicit */_Bool) (unsigned short)42351))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_6])))))))));
                    arr_45 [i_4] [i_4] [(unsigned char)10] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) -964105285)) ? (arr_7 [i_4] [i_5] [i_6] [i_11]) : (((/* implicit */unsigned long long int) arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))))));
                }
                /* vectorizable */
                for (signed char i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    arr_48 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1342651520)) ? (((/* implicit */int) arr_19 [i_5 - 2] [i_4] [i_5 - 1])) : (arr_9 [i_4] [i_5] [(unsigned short)17])));
                    var_15 *= ((/* implicit */unsigned char) arr_36 [i_12] [i_5] [i_5] [i_5] [4U]);
                }
                arr_49 [i_4] [i_5] [i_4] [i_6] = ((/* implicit */unsigned char) ((long long int) (-((+(arr_9 [i_4] [i_5] [i_6]))))));
                arr_50 [i_4] [i_5] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -6327725872648106292LL)) ? (((/* implicit */long long int) 1579622123U)) : (3227945536502985315LL)));
            }
        }
        arr_51 [i_4] = ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) (unsigned char)215)))));
        arr_52 [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12386))) : (-4457499187128649000LL)))) ? (max((arr_18 [i_4]), (((/* implicit */unsigned int) arr_28 [i_4] [i_4] [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_16 = ((/* implicit */unsigned short) (short)2360);
    }
    var_17 = ((/* implicit */unsigned long long int) 1589713784U);
    var_18 = ((/* implicit */unsigned int) ((int) ((unsigned short) min((var_8), (((/* implicit */unsigned long long int) var_9))))));
}
