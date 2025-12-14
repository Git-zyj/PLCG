/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112949
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)62525)) || (((/* implicit */_Bool) (signed char)7))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23))) & (arr_2 [(unsigned char)12]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-110), (((/* implicit */signed char) arr_0 [i_0]))))))))));
        var_20 &= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)48565)), (2147483647U)))), (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30742))))))) & (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_0 [i_0 - 2])) & (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_0])), (var_0)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)13899)), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)16971)))))) || (((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_16)))) || (((arr_0 [9LL]) || (((/* implicit */_Bool) var_11))))))));
            arr_6 [6] [i_1] [i_1] &= ((/* implicit */signed char) ((((max((var_8), (((/* implicit */long long int) var_11)))) ^ (((/* implicit */long long int) ((/* implicit */int) max(((signed char)32), ((signed char)-30))))))) >> (((((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (2319751240895569973ULL))) ^ (((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) - (5327479829781994480ULL)))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        {
                            var_22 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) (unsigned short)65535)))))) / (((((/* implicit */unsigned long long int) arr_16 [i_0] [i_2] [i_0] [i_2])) & (arr_13 [i_0])))));
                            arr_19 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((-4035742807829776682LL) > (((/* implicit */long long int) ((/* implicit */int) var_11))))))) < (((((/* implicit */unsigned int) 513512085)) / (723598979U)))));
                            var_23 *= ((((((/* implicit */_Bool) 2412662095U)) && (((/* implicit */_Bool) 657449694U)))) && (((((/* implicit */_Bool) -1255619459)) && (((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1])))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (_Bool)1)))))) <= (((((/* implicit */unsigned long long int) 17U)) ^ (arr_5 [i_0] [10ULL]))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (int i_7 = 2; i_7 < 12; i_7 += 2) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)65528)), (((657449695U) * (((/* implicit */unsigned int) -1302359546))))))), (((((5172849906550406513ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9935))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    arr_24 [i_7] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_7), ((short)-12516)))), (min((((/* implicit */unsigned int) var_7)), (657449695U)))))) || (((((/* implicit */_Bool) 1317210892)) && (((/* implicit */_Bool) (unsigned short)19161))))));
                    var_26 &= ((/* implicit */unsigned char) min((max((((16682215460552330537ULL) - (((/* implicit */unsigned long long int) 3478381039U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((arr_14 [i_0] [i_0] [i_6] [i_0] [i_7]) - (2104596025)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((16682215460552330514ULL), (((/* implicit */unsigned long long int) var_0))))) && (((var_2) && (((/* implicit */_Bool) var_16)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                {
                    arr_30 [5ULL] [i_0] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((((/* implicit */int) arr_8 [i_0])) * (((/* implicit */int) (signed char)90)))), (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)51301))))))) - (max((((/* implicit */unsigned int) max((arr_14 [i_0] [i_0] [5] [i_8] [2]), (((/* implicit */int) var_3))))), (max((((/* implicit */unsigned int) (unsigned char)255)), (var_16)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_10 = 2; i_10 < 10; i_10 += 3) /* same iter space */
                    {
                        arr_33 [i_0] = ((/* implicit */unsigned char) ((((arr_28 [i_0 + 2]) & (((/* implicit */unsigned long long int) var_12)))) << (((((((/* implicit */long long int) ((/* implicit */int) var_2))) | (805662295219955276LL))) - (805662295219955230LL)))));
                        var_27 = ((((((/* implicit */unsigned long long int) arr_15 [i_0])) | (274877906943ULL))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0]))) | (var_19))));
                        arr_34 [(unsigned short)1] [i_8] [i_0] [i_10 + 4] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)54281)) % (-641921713)))) - (((274877906943ULL) | (((/* implicit */unsigned long long int) 0LL))))));
                    }
                    for (short i_11 = 2; i_11 < 10; i_11 += 3) /* same iter space */
                    {
                        var_28 = min((max((min((arr_28 [i_0]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((3735868401U) - (3735868371U)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 961577583400654013ULL)) && (((((/* implicit */_Bool) 641921712)) && (((/* implicit */_Bool) 816586241U))))))));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_18)) >> (((/* implicit */int) (_Bool)0)))) & (((arr_32 [9LL] [2] [i_11] [i_11]) << (((((/* implicit */int) var_15)) - (1))))))) > (max((((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_11] [i_12])) > (((/* implicit */int) (_Bool)1))))), (((((/* implicit */int) arr_29 [i_9])) | (arr_16 [i_0] [i_9] [i_11] [i_12])))))));
                            var_29 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((4158717168U) + (var_6))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (641921712))))))), (((max((((/* implicit */unsigned long long int) arr_32 [i_0 - 2] [i_9] [(_Bool)1] [13])), (arr_2 [i_0]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8] [i_9] [(unsigned short)6]))) * (arr_28 [i_9])))))));
                            arr_41 [12ULL] [i_8] [i_0] [i_11] [i_12] [i_11] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) max((5246233989353662399LL), (((/* implicit */long long int) (_Bool)1))))), (((arr_2 [i_11]) & (((/* implicit */unsigned long long int) 6004742802583075372LL)))))), (((min((var_4), (((/* implicit */unsigned long long int) arr_25 [i_8] [i_8] [i_0])))) / (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) arr_9 [i_11] [i_9] [(short)2])))))))));
                        }
                        var_30 &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) << (((-641921712) + (641921728)))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (unsigned char)255)), (18446743798831644651ULL))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_17 [i_0] [i_8] [i_9] [i_13])) || (((/* implicit */_Bool) 2129604761290848838ULL)))), (((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) -641921708)))))))));
                        var_32 = ((/* implicit */short) max((((/* implicit */long long int) min(((unsigned short)65518), (((/* implicit */unsigned short) (signed char)40))))), (((((/* implicit */long long int) ((/* implicit */int) min((arr_29 [i_0]), (arr_1 [i_0] [9U]))))) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) / (-1LL)))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        var_33 = ((/* implicit */short) max((min((min((((/* implicit */unsigned long long int) -641921708)), (0ULL))), (((/* implicit */unsigned long long int) max((-558584140326710013LL), (-1LL)))))), (((/* implicit */unsigned long long int) min((max((3078695757U), (((/* implicit */unsigned int) var_7)))), (((1216271538U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-20401))))))))));
                        var_34 = ((/* implicit */unsigned int) min((((((268435455ULL) << (((((/* implicit */int) (unsigned char)219)) - (182))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) > (((/* implicit */int) arr_38 [i_0 - 2] [i_0])))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)20401)) && (var_2))), (((((/* implicit */_Bool) arr_43 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0 + 1])) && (((/* implicit */_Bool) var_5)))))))));
                        var_35 &= ((/* implicit */short) max((((max((((/* implicit */long long int) 2147483647)), (-8375382638653530096LL))) / (max((((/* implicit */long long int) var_15)), (arr_15 [i_8]))))), (((/* implicit */long long int) max((0), (((/* implicit */int) (unsigned char)230)))))));
                    }
                    var_36 = ((/* implicit */unsigned short) max((3452147716U), (((/* implicit */unsigned int) (unsigned char)191))));
                    var_37 = ((/* implicit */signed char) ((min((((((/* implicit */unsigned long long int) 842819580U)) & (arr_18 [i_9] [i_8] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -124977259)) & (9223372036854775807LL)))))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)18949))) ^ (-1230825268254576268LL)))), (((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40043)))))))));
                }
            } 
        } 
    }
    var_38 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (max((14586210048191266040ULL), (((/* implicit */unsigned long long int) -4LL)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) + (((/* implicit */int) (unsigned char)63))))), (((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_50 [i_15] [i_15] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))))))), (max((3860534025518285572ULL), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (963703897))))))));
        arr_51 [i_15] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))))) / (min((((/* implicit */unsigned long long int) arr_42 [3U] [i_15] [i_15] [i_15])), (arr_17 [i_15] [i_15] [i_15] [i_15]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_19), (arr_28 [i_15])))) || (min((var_2), (var_2))))))));
        var_39 -= ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) arr_9 [(unsigned short)9] [(unsigned short)9] [i_15])), (var_12))) & (((-5082283994248271241LL) & (((/* implicit */long long int) ((/* implicit */int) var_2))))))) ^ (((/* implicit */long long int) max((min((((/* implicit */int) (unsigned char)45)), (-7))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)223)), ((short)26083)))))))));
    }
    var_40 = ((/* implicit */unsigned int) ((((min((var_19), (var_19))) ^ (((/* implicit */unsigned long long int) ((1941667840U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)42)))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)58325)))) / (((/* implicit */int) ((((/* implicit */long long int) var_6)) >= (var_8)))))))));
    var_41 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((var_18) || (((/* implicit */_Bool) 4294967292U)))) || (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (signed char)18))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 641921687))))), (max((((/* implicit */long long int) var_16)), (var_1)))))));
}
