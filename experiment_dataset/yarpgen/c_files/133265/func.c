/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133265
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned int) max((((max((arr_7 [i_0] [i_3] [i_1 + 3] [i_1 + 3] [i_3] [i_1 + 3]), (((/* implicit */unsigned long long int) var_10)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1535359317)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-26687)) != ((~(1535359323))))))));
                        var_12 = ((/* implicit */long long int) max((min((arr_7 [i_3] [(unsigned short)8] [i_2] [i_2] [(unsigned short)8] [i_1 - 1]), (arr_7 [(signed char)4] [(signed char)4] [i_3] [i_2] [(signed char)4] [i_1 - 1]))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    }
                } 
            } 
            var_13 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)171))))) ? (((/* implicit */unsigned long long int) (+(var_9)))) : (min((((/* implicit */unsigned long long int) arr_2 [i_1 + 3] [i_1 + 1] [i_1 + 1])), (arr_0 [i_1 - 1])))));
        }
        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 3; i_5 < 10; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                {
                    arr_17 [i_0] [(_Bool)1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_4] [i_5] [i_6]))) : (max((((((/* implicit */_Bool) (unsigned char)84)) ? (arr_15 [i_0] [i_4] [i_5 - 3] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)26687))))), (((/* implicit */long long int) arr_2 [i_6] [i_5 - 1] [i_0]))))));
                    var_15 = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)51081)), (400551288U))));
                }
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)87))))));
                        var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_7] [(unsigned short)6] [(_Bool)0] [(_Bool)0] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_7 [i_0] [0] [i_4] [i_7] [i_8 + 2] [i_8 + 2])));
                        var_18 = (unsigned char)171;
                        var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)10541))))) ? (((2121819842) * (((/* implicit */int) arr_22 [i_8] [4] [4] [4] [4LL])))) : ((~(((/* implicit */int) (unsigned char)170))))));
                        var_20 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 402321269)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_7] [i_8])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 2) /* same iter space */
                    {
                        arr_26 [i_0] [(signed char)11] [i_4] [2U] [i_7] [i_4] = ((/* implicit */unsigned short) var_9);
                        arr_27 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) arr_9 [i_4] [i_4])))));
                        arr_28 [i_0] [i_4] [i_4] [i_7] [i_9] = ((/* implicit */_Bool) max((((/* implicit */int) arr_23 [i_0] [i_4])), (((((/* implicit */int) (unsigned short)34193)) % (((/* implicit */int) (unsigned char)199))))));
                        arr_29 [i_0] [i_4] [i_4] [i_7] [i_9] = ((/* implicit */unsigned short) min((1168345577884229520LL), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)45)), ((unsigned short)18862)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((long long int) arr_1 [i_9]))))));
                        var_21 = ((/* implicit */unsigned long long int) ((4191838095U) >> (((((/* implicit */int) (short)-26684)) + (26695)))));
                    }
                    var_22 = ((/* implicit */signed char) (unsigned char)234);
                }
                arr_30 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) == (1168345577884229520LL)))), (arr_18 [i_5 + 1] [i_4] [i_4] [i_0])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3397754900702609439LL)) ? (((/* implicit */int) (short)15401)) : (822642623)))))))));
                arr_31 [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((unsigned short)34876), ((unsigned short)54994))))));
            }
            var_23 = ((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned long long int) arr_18 [i_0] [i_4] [i_0] [i_0])), (((((/* implicit */_Bool) (short)-2353)) ? (3473857133380534198ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
            arr_32 [i_4] = ((/* implicit */unsigned char) 2679802440U);
        }
        arr_33 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)63254)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)85)))) : (((((/* implicit */_Bool) 2810527997U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20600))) : (-1649989821776745941LL)))))));
        var_24 += ((/* implicit */unsigned short) ((var_7) == (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)31448)))))));
        var_25 |= ((/* implicit */int) ((((/* implicit */_Bool) -1276082227)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30023))) : (1876001794064675634LL)));
        arr_34 [i_0] = ((/* implicit */unsigned char) 168781175U);
    }
    var_26 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) 
    {
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_1))) : (((unsigned long long int) 1568843904U)))))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_12 = 3; i_12 < 19; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) max((var_28), ((unsigned short)58602)));
                            var_29 = ((/* implicit */signed char) ((unsigned char) arr_36 [i_12 + 3]));
                        }
                    } 
                } 
                var_30 = ((/* implicit */long long int) (unsigned short)8257);
            }
            /* LoopNest 3 */
            for (unsigned short i_15 = 2; i_15 < 19; i_15 += 4) 
            {
                for (long long int i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (((~(4126186104U))) / (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) : (var_7))))))));
                            var_32 *= ((/* implicit */unsigned long long int) (signed char)106);
                            arr_58 [i_10] [i_10] [i_15] [i_16] [i_17] = ((/* implicit */unsigned short) var_8);
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_18 = 0; i_18 < 15; i_18 += 2) 
    {
        arr_62 [i_18] = ((/* implicit */unsigned long long int) arr_51 [i_18] [i_18]);
        arr_63 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? ((~(-1691768032))) : ((~((+(((/* implicit */int) (unsigned short)57257))))))));
        arr_64 [i_18] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_57 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])) ? (arr_46 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34088))))));
        arr_65 [i_18] [i_18] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) (short)-30023)) : (((/* implicit */int) (unsigned short)27889))))));
    }
    var_33 = ((/* implicit */long long int) max((var_33), ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */long long int) var_6)), (var_2)))))))));
}
