/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135756
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
    var_14 = ((/* implicit */short) var_11);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])) / (((((/* implicit */int) arr_1 [i_0] [i_0 - 2])) & (((/* implicit */int) arr_1 [i_0] [i_0])))))) >= ((~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 3])) == (((/* implicit */int) (unsigned short)36208))))))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            var_16 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)20057)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2] [i_1 + 1]))))), (((/* implicit */unsigned long long int) (((~(370971278U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) << (((3032118871U) - (3032118855U)))))))))));
            var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160))) : (((527747311011790091ULL) * (var_1)))))) ? (var_10) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)3)))))));
            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1 - 1]))))) ? (((((/* implicit */int) (short)-10179)) * (((/* implicit */int) arr_1 [i_0 + 2] [i_0])))) : (((((/* implicit */int) (short)11623)) - (((/* implicit */int) (signed char)-89)))));
        }
        for (short i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_1 [i_0 - 2] [i_2 - 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])))))))));
            arr_7 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (370971275U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3072))) < (max((370971268U), (370971265U)))))))));
            var_20 = min((((/* implicit */unsigned long long int) (short)-16179)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28628))) * (arr_3 [i_2 + 1] [i_0 - 3]))));
        }
        var_21 = ((/* implicit */unsigned short) ((signed char) arr_5 [i_0] [i_0]));
        var_22 += ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) ^ (-5294238833194690967LL)))), (min((((/* implicit */unsigned long long int) (unsigned short)54202)), (var_13))))), (((/* implicit */unsigned long long int) ((signed char) ((long long int) arr_5 [i_0] [i_0]))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 9; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 1; i_5 < 9; i_5 += 1) 
            {
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_10 [(unsigned char)2])) ^ (((/* implicit */int) arr_2 [i_3]))))))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_3 - 2])) + (((/* implicit */int) arr_1 [i_3 - 2] [i_4 - 2]))));
            }
            var_25 &= ((/* implicit */short) ((arr_8 [i_4 + 1]) ^ (arr_8 [i_4 + 1])));
            /* LoopSeq 4 */
            for (short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                arr_19 [i_3 - 1] [i_3] [i_4] [5ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_3 + 1])) >> (((((/* implicit */int) (short)-1)) + (20)))));
                var_26 = ((/* implicit */short) (~(370971278U)));
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 8; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 8; i_8 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_6))));
                            arr_25 [i_3 - 1] [i_3 - 1] [i_3 - 3] [i_3 - 3] [i_3 - 3] = ((/* implicit */signed char) ((14094897655885564474ULL) / (var_1)));
                        }
                    } 
                } 
                var_28 |= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (short)-12651)) && (((/* implicit */_Bool) 1116678306U))))));
            }
            for (short i_9 = 1; i_9 < 8; i_9 += 2) 
            {
                var_29 &= ((/* implicit */unsigned char) arr_9 [i_9 + 2]);
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_9] [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_9 - 1] [(signed char)4])) && (((/* implicit */_Bool) var_11))));
            }
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((3923996017U) > (370971267U))))) - (arr_18 [i_3] [i_3 + 1] [i_4 - 1] [(unsigned char)6])));
                /* LoopSeq 3 */
                for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    var_32 = ((/* implicit */short) ((10079506060288926477ULL) * (((/* implicit */unsigned long long int) 2755080056580262324LL))));
                    arr_32 [i_10] [i_4] = ((/* implicit */long long int) var_1);
                    arr_33 [i_10] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)19101))));
                }
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        var_33 = ((/* implicit */int) ((8015393875028524526ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3 - 2] [i_4 - 1])))));
                        var_34 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 - 1] [i_4 + 1]))) + (3923996017U));
                        var_35 *= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)29588))));
                        arr_39 [i_10] [i_10] [i_10] [i_4 - 1] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) 576460752169205760ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13752))) : (arr_9 [i_3 - 2])));
                    }
                    for (signed char i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        arr_44 [i_3 - 2] [i_10] [i_10] [i_10] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_3 - 1])) - (((/* implicit */int) arr_10 [i_4 + 1]))));
                        arr_45 [i_3] [i_3] [(unsigned char)4] [(short)0] [i_3] &= ((/* implicit */int) (short)-11760);
                        arr_46 [i_10] [i_10] = 8823724177438180878ULL;
                        var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-11759))))) == (var_1)));
                    }
                    for (signed char i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_3 - 3] [i_4 - 1] [i_10] [i_10] [i_3 - 1] [i_3 - 3])) || (((/* implicit */_Bool) var_13))));
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62463)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3072))) : (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_15]))) : (4503582447501312ULL)))));
                    }
                    arr_49 [i_3 + 1] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_4])) || (((/* implicit */_Bool) 9623019896271370760ULL)))) ? (((/* implicit */int) arr_4 [i_3 + 1])) : (((/* implicit */int) ((((/* implicit */int) (short)32766)) < (((/* implicit */int) (unsigned char)11)))))));
                    var_39 = ((/* implicit */short) 12747583667607756902ULL);
                }
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 1) /* same iter space */
                {
                    arr_53 [i_3] [i_3] [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_13) : (var_13))))));
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_10] [i_16])) == ((+(((/* implicit */int) (short)11772))))));
                    var_41 &= ((/* implicit */short) var_5);
                }
                var_42 = ((/* implicit */signed char) (+(((/* implicit */int) arr_20 [i_3 + 1] [i_4 + 1] [i_4 - 2]))));
                var_43 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3 - 1] [i_4 + 1] [i_10]))) - (3923996003U));
            }
            for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (unsigned short)62484))));
                var_45 &= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-11759)) & (((/* implicit */int) (short)11758))));
            }
        }
        var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) 9623019896271370737ULL))));
        arr_57 [i_3 - 1] = ((/* implicit */unsigned char) ((1376010034837863669LL) / (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_3 - 3] [i_3 - 2] [i_3 - 3] [i_3 - 2])))));
        var_47 |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)3077)) / (((/* implicit */int) var_8))));
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 3; i_18 < 9; i_18 += 4) /* same iter space */
    {
        var_48 = ((/* implicit */short) (((~(((/* implicit */int) var_6)))) == (((/* implicit */int) (short)23417))));
        /* LoopNest 2 */
        for (short i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            for (int i_20 = 0; i_20 < 10; i_20 += 4) 
            {
                {
                    var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_18 + 1] [i_18 + 1] [i_19]))) < (370971288U))))));
                    /* LoopSeq 1 */
                    for (signed char i_21 = 0; i_21 < 10; i_21 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                        {
                            var_50 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_22] [i_18] [i_18]))) % (var_2))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_18 - 1] [i_18 - 1])))));
                            arr_71 [i_18 - 1] [i_19] [i_20] [i_21] [i_22] [i_18] = ((/* implicit */unsigned short) 370971278U);
                            var_51 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1376010034837863669LL)) ? (16101411821737333653ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))));
                        }
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                        {
                            arr_75 [i_23] [i_18] [i_20] [i_18] [i_18] = ((/* implicit */short) (unsigned char)56);
                            var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)12606)) * (((/* implicit */int) (short)-26360)))) / (((/* implicit */int) arr_1 [i_18 - 2] [i_18 - 1])))))));
                        }
                        for (short i_24 = 2; i_24 < 7; i_24 += 3) 
                        {
                            var_53 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))) - (var_3)));
                            var_54 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11752)) ? (((/* implicit */unsigned long long int) arr_8 [i_18 + 1])) : (((arr_72 [i_19]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5256)))))));
                            var_55 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)11751)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)5256)))) >> (((143552238122434560ULL) << (((62693669) - (62693611)))))));
                        }
                        var_56 -= ((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [(unsigned char)2] [i_18 - 2]))));
                        var_57 += ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29607))));
                    }
                    var_58 = ((/* implicit */int) ((((/* implicit */_Bool) (short)11765)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_18] [i_18] [i_18 - 3] [i_18 - 2]))) : (arr_37 [i_18])));
                    var_59 ^= ((/* implicit */signed char) (((((_Bool)1) && (((/* implicit */_Bool) (short)-15866)))) && (((/* implicit */_Bool) 3464245168280389667ULL))));
                }
            } 
        } 
        var_60 &= arr_60 [i_18 - 3] [(short)4];
    }
    for (short i_25 = 3; i_25 < 10; i_25 += 3) 
    {
        var_61 = ((/* implicit */unsigned long long int) min((var_61), (((/* implicit */unsigned long long int) (unsigned short)13269))));
        var_62 = ((/* implicit */long long int) arr_80 [i_25 + 1]);
    }
}
