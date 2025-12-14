/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1625
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(arr_3 [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1331131475)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_2 [i_1])))))) ? ((~(min((11238936640932720859ULL), (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 1331131448)) >= (arr_1 [i_1 + 1])))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_2] [(unsigned char)3] [(short)11] = ((/* implicit */unsigned int) var_13);
                                arr_13 [i_4] [i_3] [i_2] [i_2] [i_2] [i_1] [i_0] = -2278050583502202473LL;
                                var_15 = ((/* implicit */_Bool) ((-515512977) + (1823714205)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 3; i_5 < 11; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */short) ((((((/* implicit */long long int) 1331131448)) >= (4637830379143385440LL))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(unsigned char)0] [i_2] [i_1] [i_1] [(short)9] [6U])))))) : (arr_11 [i_2 - 2] [i_2 - 2] [i_2])));
                        var_17 = ((/* implicit */unsigned char) (short)-7892);
                        arr_16 [i_5] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_1 + 2] [i_2] [i_2] [i_0] [i_5]);
                    }
                }
                for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) 
                {
                    var_18 = ((/* implicit */unsigned int) (unsigned char)255);
                    arr_19 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((arr_17 [i_0] [i_0] [i_0] [i_6]) & (515512976))) & (((/* implicit */int) ((signed char) var_5)))))) < (((((min((((/* implicit */long long int) (unsigned char)51)), (-5505335742199253620LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)8)) - (7)))))));
                    arr_20 [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                }
                for (int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_7]))));
                    var_20 = ((/* implicit */_Bool) (+(max((arr_3 [i_1 - 1]), (arr_3 [i_1 + 1])))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 2; i_10 < 9; i_10 += 4) 
                        {
                            var_21 = ((((/* implicit */int) ((959829482908844185LL) <= (var_1)))) - (((/* implicit */int) (unsigned char)84)));
                            arr_32 [(unsigned char)10] [(unsigned char)10] [i_8] [i_8] [i_10] = (((!(((/* implicit */_Bool) var_10)))) ? ((~(515512976))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) != (2147483647)))));
                            arr_33 [i_0] [i_0] [3U] [i_0] [i_9] [i_8] = ((/* implicit */_Bool) ((int) var_10));
                        }
                        for (unsigned short i_11 = 1; i_11 < 9; i_11 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) -1823714217)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((1823714205) <= (((/* implicit */int) var_12)))))));
                            arr_37 [(_Bool)1] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */long long int) var_12);
                        }
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            arr_40 [i_8] [i_12] = ((/* implicit */short) ((-959829482908844185LL) % (((9214356038358119760LL) - (959829482908844185LL)))));
                            arr_41 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) ((unsigned char) arr_14 [i_0]))) : (((/* implicit */int) (unsigned char)9))));
                        }
                        for (short i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            arr_45 [i_0] [i_8] [i_8] [i_9] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) (unsigned char)5))));
                            arr_46 [i_13] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) arr_43 [i_0] [6LL] [i_1]);
                            arr_47 [(unsigned char)11] [i_1] [3] [i_9] [i_9] [i_8] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0]) == (var_3))))) == (((((/* implicit */_Bool) 959829482908844185LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (1388650724232987942LL)))));
                            arr_48 [(_Bool)1] [i_9] [i_8] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 15455795859773395218ULL)) ? (((/* implicit */unsigned long long int) 4637830379143385433LL)) : (7637254965520598658ULL))) % (((/* implicit */unsigned long long int) -4637830379143385441LL))));
                            arr_49 [i_8] [i_1] [i_8] [i_9] [i_13] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) - (15455795859773395194ULL)));
                        }
                        arr_50 [(_Bool)1] [i_8] [i_8] [i_9] = ((((/* implicit */_Bool) arr_23 [i_9 - 1] [i_8] [i_1 + 1])) ? (((int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4637830379143385412LL))))));
                        var_23 = ((/* implicit */unsigned char) (signed char)-77);
                        arr_51 [i_9] [i_1] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_1 - 1] [(_Bool)1] [i_8] [i_1] [i_9 - 1])) ? (arr_27 [i_1 + 3] [i_1] [i_8] [i_9] [i_9 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    arr_52 [i_0] [i_8] [3ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))));
                    arr_53 [i_8] [i_1] [i_8] = ((/* implicit */short) -4637830379143385420LL);
                    var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) : (9214356038358119758LL))) >> (((((1292569858U) | (((/* implicit */unsigned int) arr_3 [i_0])))) - (3752537519U)))));
                }
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)150)) + (((/* implicit */int) arr_38 [6LL] [i_0] [6LL] [10U] [i_0]))))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)132)))) : (((/* implicit */int) (unsigned char)26))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_0] [i_0] [i_0]))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : ((-(17772486410181254297ULL)))));
                /* LoopSeq 2 */
                for (unsigned int i_14 = 1; i_14 < 9; i_14 += 2) 
                {
                    arr_57 [7LL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) & (-7679891469790573187LL)));
                    arr_58 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((var_8) ? (((((/* implicit */_Bool) (unsigned char)115)) ? (((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)136)))) : (-101930283))) : (1230093102)));
                    arr_59 [i_0] [i_1] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) 2870802346U))) & (var_1))))));
                }
                /* vectorizable */
                for (long long int i_15 = 1; i_15 < 8; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 4; i_16 < 11; i_16 += 4) 
                    {
                        arr_64 [i_16] [10LL] [i_15] [i_15] [i_0] [i_0] = ((/* implicit */int) var_8);
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(short)3] [i_0] [i_0] [(_Bool)1] [i_16]))) > (arr_22 [i_0] [i_0] [i_0])))) != (((/* implicit */int) var_13))));
                        var_27 ^= ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)161)))) == ((+(-284942025)))));
                    }
                    var_28 += ((/* implicit */long long int) (((-(((/* implicit */int) arr_0 [(unsigned short)5])))) | (((/* implicit */int) var_5))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) -1855217045);
    var_30 = ((/* implicit */int) ((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170))) / (2821769948U)))), (((((/* implicit */_Bool) -1855217071)) ? (-11LL) : (var_3))))) > (var_6)));
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-1198455809)))) ? (max((((/* implicit */int) var_9)), (((((/* implicit */int) (unsigned char)126)) + (101930275))))) : (((/* implicit */int) var_4))));
    var_32 *= ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) max((var_12), ((_Bool)1)))))) ? (min((((/* implicit */unsigned long long int) var_3)), (16982262608691993814ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)131)))) & (((/* implicit */int) var_12)))))));
}
