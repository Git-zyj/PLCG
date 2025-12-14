/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110676
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 3))))));
            arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned int) 2515627480U))) ? (((unsigned int) 1872052034)) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)6963))))));
            var_17 *= ((var_1) % (((/* implicit */int) (!(((/* implicit */_Bool) 0U))))));
        }
        for (unsigned short i_2 = 1; i_2 < 6; i_2 += 1) 
        {
            arr_10 [i_2] [i_0] [i_0] = (unsigned short)55396;
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 1; i_5 < 7; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_5] [i_3] [i_4] [8U] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 25165824U))));
                            var_18 = ((/* implicit */unsigned int) (unsigned short)17015);
                        }
                        /* LoopSeq 2 */
                        for (int i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            arr_22 [i_6] [i_3] = ((/* implicit */int) 4004014265U);
                            var_19 = max((((/* implicit */unsigned int) ((unsigned short) 4269801467U))), ((+(((((/* implicit */_Bool) 1710144817)) ? (((/* implicit */unsigned int) 2147483636)) : (268435456U))))));
                        }
                        for (int i_7 = 4; i_7 < 9; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned int) max((((arr_17 [i_2 + 3] [i_7 - 3] [i_7 - 1]) >> (((max((arr_15 [i_7] [i_7] [8U] [i_3] [i_3]), (((/* implicit */unsigned int) arr_20 [i_7 - 4] [8] [8] [i_0] [i_0])))) - (291396801U))))), ((-(-1918281250)))));
                            arr_27 [i_7] = ((/* implicit */int) var_8);
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((max((((/* implicit */unsigned int) arr_11 [3U] [i_3] [i_7 - 4])), (var_7))), (((/* implicit */unsigned int) (unsigned short)0)))))));
                            arr_28 [i_2 + 4] [i_2 + 4] [(unsigned short)3] = ((/* implicit */int) min((((/* implicit */unsigned int) 1559847777)), (var_14)));
                        }
                        arr_29 [1U] [(unsigned short)3] [i_3] [1U] = ((/* implicit */int) ((arr_2 [i_3] [i_4]) * (var_6)));
                        var_22 = max((((/* implicit */unsigned int) -450970445)), (((((/* implicit */_Bool) var_11)) ? ((-(arr_0 [i_3]))) : (((((/* implicit */_Bool) 3U)) ? (4269801472U) : (1746382351U))))));
                    }
                } 
            } 
            arr_30 [i_0] [6] [8] = 831169713U;
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((25165824U) / (((/* implicit */unsigned int) (-(-1328309463)))))) <= (((max((var_13), (3934801490U))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12277))))))))));
                var_24 = ((/* implicit */unsigned int) 1328309463);
            }
        }
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            arr_36 [i_0] [i_9] = ((/* implicit */unsigned short) 4294967282U);
            arr_37 [i_9] = min((((((/* implicit */unsigned int) (+(var_9)))) * (((((/* implicit */_Bool) 2373074335U)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))), (max((min((22099129U), (var_12))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0]))))))));
            arr_38 [i_9] [i_9] [i_9] = min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 25165820U)))))) <= (3688797930U)))), (1328309464));
            var_25 ^= max(((-(arr_14 [i_0] [i_0]))), (((((/* implicit */unsigned int) (+(25)))) - (((arr_12 [3U] [i_9]) + (((/* implicit */unsigned int) -1328309441)))))));
        }
        var_26 = ((/* implicit */int) (-(max((((3940191342U) - (((/* implicit */unsigned int) arr_8 [i_0])))), (var_13)))));
        arr_39 [3U] = ((/* implicit */int) min(((+(max((4269801472U), (2939576425U))))), (var_6)));
        /* LoopSeq 2 */
        for (int i_10 = 3; i_10 < 8; i_10 += 4) 
        {
            arr_42 [i_10] = ((/* implicit */unsigned int) arr_18 [i_10 - 1] [i_10 + 1]);
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) min((max(((-(4294967295U))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)12)), (1934118803)))))), (((/* implicit */unsigned int) (~(var_3)))))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    {
                        arr_50 [i_0] [(unsigned short)5] [i_11] [(unsigned short)5] [i_10] [i_0] = ((unsigned int) ((((/* implicit */unsigned int) 155516464)) <= (4294967291U)));
                        arr_51 [i_0] [i_11] |= ((/* implicit */unsigned short) min((((max((4269801470U), (((/* implicit */unsigned int) 714295909)))) | (((/* implicit */unsigned int) min((arr_16 [i_0] [i_11] [i_10] [i_10 + 2] [i_0]), (((/* implicit */int) var_11))))))), (min((min((4269801470U), (4152817387U))), (max((752266123U), (4294967283U)))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned int) 706759934);
            arr_52 [i_0] [i_0] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(1849689785U))))));
        }
        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            arr_55 [i_0] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((807642797), (-1328309444))) << (((((((/* implicit */_Bool) 4294967293U)) ? (310221759U) : (((/* implicit */unsigned int) 2147483647)))) - (310221759U)))))) || (((/* implicit */_Bool) var_14))));
            arr_56 [i_0] [i_13] [i_13] |= ((/* implicit */unsigned int) ((int) var_12));
        }
        arr_57 [i_0] = ((849996812U) & (((4269801472U) ^ (max((var_0), (((/* implicit */unsigned int) -2147483634)))))));
    }
    for (unsigned short i_14 = 3; i_14 < 14; i_14 += 1) 
    {
        arr_60 [i_14] = ((/* implicit */int) max((((((/* implicit */_Bool) var_2)) ? (max((var_4), (911365204U))) : (((/* implicit */unsigned int) (~(arr_58 [(unsigned short)11])))))), ((~(min((var_8), (255264564U)))))));
        var_29 = ((/* implicit */int) var_11);
        arr_61 [i_14] = ((/* implicit */int) min((((/* implicit */unsigned int) -1328309480)), (max((((var_4) - (var_2))), (((var_15) + (1370385759U)))))));
        arr_62 [13] [i_14] = ((/* implicit */int) ((min((983040U), (((/* implicit */unsigned int) 2147483647)))) - (min((min((((/* implicit */unsigned int) arr_58 [(unsigned short)3])), (753208212U))), (max((((/* implicit */unsigned int) 1253652161)), (var_12)))))));
        arr_63 [i_14] = ((/* implicit */int) max((min((((/* implicit */unsigned int) arr_58 [i_14 - 1])), (var_10))), (max((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))))));
    }
    for (int i_15 = 3; i_15 < 14; i_15 += 1) 
    {
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (+((-2147483647 - 1)))))) || (((/* implicit */_Bool) min((((4121289642U) + (((/* implicit */unsigned int) -27)))), (max((4294967284U), (arr_59 [i_15])))))))))));
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 14; i_16 += 1) 
        {
            for (unsigned int i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 0; i_18 < 15; i_18 += 4) 
                    {
                        var_31 = ((/* implicit */int) (unsigned short)9000);
                        arr_76 [i_15 + 1] [i_16 - 1] [i_17] [i_15] [i_16 - 1] = ((/* implicit */int) max((((((/* implicit */unsigned int) -1930143457)) - (((210225110U) - (var_0))))), (((/* implicit */unsigned int) ((((int) (unsigned short)5464)) - ((-(-694243649))))))));
                    }
                    var_32 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_70 [i_17] [i_16] [0U] [0U])) ? (3984745568U) : (210225141U))) << (((((((/* implicit */unsigned int) arr_67 [i_15] [i_15])) ^ (var_4))) - (679245304U)))))) ? (((4U) >> (((var_15) - (1778837333U))))) : (var_2));
                }
            } 
        } 
        arr_77 [i_15] = ((/* implicit */int) max((min((2425970373U), (4294836224U))), (max((((arr_68 [i_15] [i_15]) | (((/* implicit */unsigned int) arr_70 [7] [7] [i_15 + 1] [i_15])))), (((/* implicit */unsigned int) max((18), (-984545300))))))));
    }
    for (unsigned int i_19 = 3; i_19 < 14; i_19 += 3) 
    {
        arr_81 [i_19] = -11663038;
        var_33 = var_10;
        arr_82 [6U] [7] = ((/* implicit */unsigned int) ((((3065915311U) << (1U))) == (var_8)));
    }
    var_34 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2147483647))));
    var_35 = (-(min((((/* implicit */unsigned int) ((879239067) - (var_5)))), (min((4139023317U), (((/* implicit */unsigned int) (unsigned short)13730)))))));
    var_36 |= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)15783)) : (1672171827)))) && (((/* implicit */_Bool) max((4294967273U), (((/* implicit */unsigned int) var_9))))))))));
    var_37 = ((/* implicit */int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_7))))), (min((0U), (var_12))))) / (((((((/* implicit */_Bool) 0)) ? (var_0) : (524288U))) * (max((((/* implicit */unsigned int) var_3)), (var_7)))))));
}
