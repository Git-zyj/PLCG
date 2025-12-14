/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131378
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = arr_0 [i_0 + 1];
        var_18 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) 2078866862984642875ULL)) ? (2078866862984642880ULL) : (2078866862984642880ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0 + 1])))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84))) % (13324597389715866815ULL))))) ? (((564270254984365795ULL) / (arr_1 [(signed char)6]))) : (((unsigned long long int) 16367877210724908752ULL)))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-52))));
        var_20 = ((/* implicit */signed char) arr_5 [i_1] [i_1]);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (var_3)));
    }
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_2] [i_2])), (5697977675017260784ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((4398029733888ULL), (((/* implicit */unsigned long long int) (signed char)59))))) ? ((~(arr_8 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) || (((/* implicit */_Bool) var_11)))))))))));
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) 17035727755785924051ULL);
        arr_13 [i_2] = ((unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_2] [23ULL])) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) ((signed char) (signed char)-23)))));
        var_22 = ((/* implicit */signed char) ((unsigned long long int) (signed char)75));
    }
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((max((min((((/* implicit */unsigned long long int) (signed char)-16)), (var_13))), (((((/* implicit */_Bool) arr_1 [(signed char)12])) ? (var_10) : (18446739675679817726ULL))))), (min((min((arr_3 [i_3]), (((/* implicit */unsigned long long int) arr_6 [i_3] [(signed char)8])))), (((arr_5 [i_3] [i_3]) & (var_15))))))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            arr_18 [i_4] [i_4] [i_4] = ((arr_1 [i_4]) & (((((/* implicit */_Bool) ((3670016ULL) - (8315625623515565899ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43))) : (arr_5 [i_4 - 2] [i_4 - 1]))));
            var_24 ^= max((var_14), (min((((arr_8 [i_4 - 1] [i_4 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))))), (arr_8 [i_4] [i_3]))));
            /* LoopSeq 4 */
            for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                arr_21 [i_5] = ((/* implicit */signed char) var_8);
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (signed char)13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_6 - 1])))) : (((unsigned long long int) arr_0 [i_6 + 1]))))));
                            var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-80))));
                        }
                    } 
                } 
            }
            for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                var_27 ^= min((((((arr_20 [(signed char)12] [i_4 - 1] [i_4 - 1]) >> (((var_7) - (6521796338195985873ULL))))) * (min((var_15), (var_10))))), (((unsigned long long int) (+(arr_16 [11ULL])))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) min((((signed char) 16555872621780627163ULL)), ((signed char)4)))) : ((+(((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_3] [i_3]))))))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    var_29 |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (signed char)9)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (min((min((arr_20 [i_11] [i_10] [i_4 - 1]), (((/* implicit */unsigned long long int) arr_9 [i_4])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) | (arr_0 [i_3])))))));
                        arr_37 [i_3] [i_11] [9ULL] [i_10] [4ULL] = ((/* implicit */signed char) ((((((unsigned long long int) 10039253166108398001ULL)) - (3983718123598831263ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)58), ((signed char)79)))))));
                        arr_38 [5ULL] [i_4] [i_9] [(signed char)4] [(signed char)4] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_3] [i_3] [i_9] [i_4 - 1] [i_11])) ? (min((arr_3 [i_9]), (4398029733878ULL))) : (((unsigned long long int) 15950261176213396712ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77))) : (arr_5 [i_4 + 1] [i_4 + 1])));
                    }
                }
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    arr_41 [i_12] [i_12] [(signed char)11] [10ULL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-52)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) ^ (2834622737994196543ULL))) : (((9220574503170013790ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_3] [i_3] [i_3] [i_3] [i_3]))))))) | (10131118450193985713ULL)));
                    var_31 = ((/* implicit */signed char) min((var_31), (((signed char) (-(arr_26 [i_4 + 1] [i_9]))))));
                    var_32 = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_4 [i_12])), (8315625623515565905ULL))), (min((((/* implicit */unsigned long long int) (signed char)71)), (4398029733878ULL)))))) ? (var_5) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_40 [(signed char)13] [11ULL] [i_12] [(signed char)13]))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) + (arr_3 [i_9]))))));
                }
                arr_42 [6ULL] [i_4] [i_4] [i_3] = ((/* implicit */signed char) (~(min(((+(var_15))), (21ULL)))));
                /* LoopSeq 3 */
                for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    var_33 = ((((((/* implicit */_Bool) 576460752303423487ULL)) ? (((((/* implicit */_Bool) arr_22 [i_4 - 1] [i_13] [i_4 - 1])) ? (arr_19 [i_9] [(signed char)4] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))))) : (18ULL))) >> (((max((((arr_39 [i_3] [i_13] [i_9] [i_9] [i_13]) + (0ULL))), (var_8))) - (17744616683078171422ULL))));
                    arr_45 [(signed char)12] [i_4] [i_4] [i_4] = min((var_7), (((((((/* implicit */_Bool) arr_19 [i_3] [i_3] [13ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))) : (0ULL))) - (min((15836079790636250021ULL), (((/* implicit */unsigned long long int) (signed char)15)))))));
                }
                for (signed char i_14 = 3; i_14 < 13; i_14 += 4) 
                {
                    var_34 -= ((/* implicit */signed char) ((unsigned long long int) min((arr_35 [i_14] [i_14] [i_14 - 2] [i_4 - 1] [i_3]), (arr_35 [i_14 - 2] [(signed char)12] [i_14 - 2] [i_4 - 2] [3ULL]))));
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-30)) ? (13571746254536568219ULL) : (18446744073709551615ULL))))));
                }
                for (signed char i_15 = 4; i_15 < 13; i_15 += 1) 
                {
                    var_36 ^= ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */int) var_17)) + (((/* implicit */int) (signed char)36)))) / (((((/* implicit */int) arr_34 [7ULL] [(signed char)9] [i_9])) | (((/* implicit */int) arr_50 [i_4] [i_9])))))));
                    arr_52 [i_15] [i_4 - 1] [(signed char)5] [(signed char)5] [i_15 - 2] = arr_3 [i_3];
                    var_37 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_6 [i_4 - 2] [i_4 - 1]))))), (arr_47 [i_15 - 4] [i_9] [i_4] [i_3])));
                }
                arr_53 [i_9] [12ULL] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-24))));
                /* LoopSeq 1 */
                for (signed char i_16 = 4; i_16 < 12; i_16 += 2) 
                {
                    var_38 -= ((/* implicit */signed char) min((((/* implicit */int) ((signed char) ((signed char) (signed char)-126)))), (((((/* implicit */int) (signed char)-103)) - (((/* implicit */int) (signed char)-61))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_17 = 1; i_17 < 13; i_17 += 1) 
                    {
                        var_39 = ((/* implicit */signed char) max((var_39), ((signed char)7)));
                        var_40 = ((/* implicit */unsigned long long int) max((var_40), ((~(((var_14) >> (((3455100390846300990ULL) - (3455100390846300986ULL)))))))));
                    }
                    for (unsigned long long int i_18 = 2; i_18 < 12; i_18 += 2) /* same iter space */
                    {
                        var_41 = ((((((/* implicit */_Bool) ((18404847068187608508ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [(signed char)12] [i_16] [(signed char)6] [3ULL] [i_3])))))) ? (((arr_39 [i_18] [i_4] [i_18 - 1] [i_18 + 1] [(signed char)12]) / (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_47 [i_3] [i_3] [i_9] [i_16 - 4]), ((signed char)-109))))))) ^ (((((/* implicit */_Bool) arr_23 [i_18] [i_16] [i_9] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_3] [i_3])) || (((/* implicit */_Bool) 7385799155957741411ULL)))))) : (min((((/* implicit */unsigned long long int) (signed char)-96)), (arr_26 [i_9] [i_9]))))));
                        var_42 |= ((/* implicit */signed char) 3788221605053486850ULL);
                        arr_63 [5ULL] [6ULL] = ((/* implicit */signed char) ((((unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) (signed char)75))))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-117)))))));
                        var_43 = ((/* implicit */unsigned long long int) max((var_43), (min((max((8897454222428554263ULL), (((/* implicit */unsigned long long int) (signed char)-33)))), (max((1023ULL), (arr_15 [i_4 - 2])))))));
                    }
                    for (unsigned long long int i_19 = 2; i_19 < 12; i_19 += 2) /* same iter space */
                    {
                        var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) min((17596417454861351741ULL), (0ULL))))));
                        var_45 += ((/* implicit */signed char) ((unsigned long long int) ((signed char) (~(((/* implicit */int) (signed char)73))))));
                    }
                    var_46 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_3] [5ULL] [5ULL] [i_9] [i_16 - 3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-90))))), (min((((/* implicit */unsigned long long int) (signed char)-80)), (1382800143164033116ULL)))))) ? (17592186044415ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((signed char)127), (var_9)))) ? (((/* implicit */int) arr_60 [i_16 - 3] [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [7ULL] [i_4] [i_4] [(signed char)0] [i_4])))))))));
                }
            }
            for (unsigned long long int i_20 = 4; i_20 < 13; i_20 += 2) 
            {
                var_47 = min((max((((unsigned long long int) (signed char)-77)), (((/* implicit */unsigned long long int) ((signed char) 18446744073709551609ULL))))), (((((/* implicit */_Bool) arr_56 [i_20 - 3] [i_20 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 2])) ? (6146847620431847024ULL) : (((8430001401528343251ULL) >> (((18145092804103403895ULL) - (18145092804103403892ULL))))))));
                var_48 = ((min((((/* implicit */unsigned long long int) min(((signed char)-110), ((signed char)-114)))), (((arr_16 [(signed char)2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_3] [i_3] [i_3] [i_20] [i_3] [i_3]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((22ULL), (9201133132606310733ULL))) > (11060944917751810195ULL))))));
                var_49 = min((10572291728241164001ULL), (((unsigned long long int) (signed char)-54)));
                var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 0ULL))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3723853844096714045ULL))))), (((unsigned long long int) 18446744073709551615ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_20 - 4] [3ULL] [4ULL] [i_3] [7ULL])) && (((/* implicit */_Bool) 3019534715264812810ULL))))))));
            }
        }
        arr_70 [i_3] = ((7ULL) << (15ULL));
    }
}
