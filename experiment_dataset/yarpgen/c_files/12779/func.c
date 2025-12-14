/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12779
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max(((short)-14494), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) (short)-17546))));
        var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_17)) ? ((+(((/* implicit */int) var_18)))) : ((~(((/* implicit */int) arr_1 [i_0])))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) ((((long long int) arr_4 [(_Bool)1] [(_Bool)1])) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) <= ((~(((/* implicit */int) arr_0 [i_0]))))))))));
            var_21 = ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32240)))) % (((((/* implicit */int) (signed char)-66)) + (((/* implicit */int) var_13)))))));
            var_22 -= ((/* implicit */signed char) (!((_Bool)1)));
        }
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_0 [i_0]))))) % (min((((/* implicit */long long int) (signed char)65)), (arr_3 [i_0])))));
            arr_7 [i_0] = ((/* implicit */unsigned short) (_Bool)0);
        }
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) < (((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0 + 2]))))) + ((((+(((/* implicit */int) arr_4 [i_0] [i_3])))) ^ ((-(((/* implicit */int) (signed char)69))))))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) min((((_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)31594)) : (((/* implicit */int) arr_5 [i_4] [i_3] [i_4]))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) > (((((/* implicit */int) arr_5 [i_4] [i_3] [i_4])) % (((/* implicit */int) arr_5 [i_4] [(unsigned short)14] [(_Bool)1])))))))))));
                var_26 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) arr_6 [i_0 + 2] [i_0])))));
                var_27 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_0 + 1])))));
            }
            for (signed char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
            {
                var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(var_5)))) + (((/* implicit */int) ((((/* implicit */int) arr_5 [i_5] [i_3] [i_5])) <= (((/* implicit */int) (short)28485)))))))) ? (((long long int) ((long long int) (_Bool)1))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_0 + 1] [i_5]), (((/* implicit */unsigned short) max(((_Bool)1), (var_2))))))))));
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_0 + 1] [i_5] [i_5])) ^ (((/* implicit */int) arr_0 [i_5])))) <= (((arr_0 [i_5]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))))));
            }
        }
        arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_8 [i_0 - 1] [i_0]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_13 [i_0] [i_0] [(short)7])), (arr_8 [i_0 + 2] [i_0]))))));
    }
    for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        arr_18 [(_Bool)1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((arr_10 [6LL]), (((/* implicit */unsigned short) (signed char)-52))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [(_Bool)1])) < (((/* implicit */int) arr_0 [(unsigned short)12]))))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((unsigned short) (_Bool)1)))));
        var_30 = ((/* implicit */_Bool) (signed char)21);
        var_31 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) ((min((var_5), ((_Bool)1))) || (arr_4 [i_6] [(short)13]))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_10 [(unsigned short)6]), (arr_10 [(signed char)10])))) != (((/* implicit */int) arr_10 [(_Bool)1]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_23 [(signed char)5] &= ((/* implicit */signed char) (+((+(((/* implicit */int) arr_22 [i_7] [i_8] [i_8]))))));
            arr_24 [i_7] [i_7] [i_8] = ((/* implicit */signed char) var_6);
        }
        for (unsigned short i_9 = 2; i_9 < 17; i_9 += 1) 
        {
            arr_28 [i_7] [i_7] [i_7] = min((var_15), (((short) arr_25 [i_9 - 2] [i_9 + 1])));
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (-((~(((long long int) arr_27 [i_7] [(signed char)9] [i_9 + 1])))))))));
            arr_29 [i_9 - 2] = ((((/* implicit */_Bool) (-(arr_21 [(_Bool)1] [(_Bool)1])))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((arr_21 [i_7] [i_9]) == (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
            var_34 = ((/* implicit */signed char) ((var_9) ? (min(((~(((/* implicit */int) (signed char)-65)))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)18))))))) : ((+(((/* implicit */int) ((_Bool) (_Bool)1)))))));
            arr_30 [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(short)0])) || (((/* implicit */_Bool) arr_3 [(unsigned short)10]))))) >> (((((/* implicit */int) (signed char)57)) - (43)))));
        }
        for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            var_35 = ((/* implicit */signed char) (((~(((/* implicit */int) (_Bool)1)))) * ((~(((/* implicit */int) ((_Bool) (short)-32766)))))));
            var_36 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)82)), ((unsigned short)62395)))) % ((~(((/* implicit */int) (short)-32745))))))) ? (((((/* implicit */int) arr_1 [i_10])) | (((/* implicit */int) max(((unsigned short)3109), (((/* implicit */unsigned short) (signed char)-127))))))) : (((arr_32 [i_7] [i_7] [i_10]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_25 [i_7] [i_10]))))));
            arr_33 [(signed char)3] [i_7] [(signed char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_25 [i_7] [(signed char)13])), (min((arr_8 [i_7] [i_10]), (((/* implicit */unsigned short) var_6))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_8 [i_7] [i_10]), (((/* implicit */unsigned short) var_8)))))))) : (((/* implicit */int) ((((/* implicit */int) arr_27 [i_7] [i_7] [i_10])) > (((/* implicit */int) (unsigned short)5)))))));
            var_37 = ((/* implicit */long long int) max((var_37), (max((((long long int) (!(arr_20 [(short)6])))), (((/* implicit */long long int) ((_Bool) arr_22 [(short)7] [(signed char)16] [(signed char)16])))))));
            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) min((((/* implicit */int) var_4)), ((~(((((/* implicit */_Bool) arr_22 [i_7] [13LL] [i_10])) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (signed char)-82)))))))))));
        }
        var_39 = ((/* implicit */signed char) var_15);
        /* LoopSeq 3 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            var_40 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_21 [i_11 - 1] [i_11 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) max((var_9), (var_4))))) : (((((/* implicit */_Bool) (signed char)-95)) ? (-6587693634428540164LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)55)))))));
            var_41 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */signed char) arr_27 [i_7] [i_7] [i_11 - 1])), (var_3)))) < (((/* implicit */int) (!(arr_32 [i_7] [i_7] [i_11]))))));
            var_42 ^= ((/* implicit */_Bool) (signed char)-24);
            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) ((unsigned short) (_Bool)1)))));
        }
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                var_44 = ((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_7] [i_12] [i_7])), (min((((((/* implicit */int) var_3)) % (((/* implicit */int) var_17)))), (((/* implicit */int) (!((_Bool)0))))))));
                arr_40 [(_Bool)0] [i_12] [i_12] = ((/* implicit */_Bool) max((((/* implicit */int) ((short) (unsigned short)56546))), ((-(((/* implicit */int) ((signed char) 8686696824880220790LL)))))));
                arr_41 [i_7] [i_12] = min((arr_38 [i_7] [(_Bool)1] [i_12]), (((/* implicit */signed char) (_Bool)1)));
                /* LoopSeq 2 */
                for (signed char i_14 = 1; i_14 < 17; i_14 += 1) 
                {
                    var_45 = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((long long int) (((_Bool)1) && (((/* implicit */_Bool) var_14)))))));
                    arr_44 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_12 - 1] [i_14]))))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (signed char)65)))))) : (((/* implicit */int) (signed char)31))));
                    var_46 = ((/* implicit */long long int) (_Bool)1);
                    arr_45 [(_Bool)1] [i_12] [i_12] [(_Bool)1] [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) arr_19 [i_12] [i_13]))));
                }
                for (unsigned short i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    var_47 ^= ((/* implicit */short) min((var_18), (((signed char) arr_12 [11LL] [i_13] [i_15]))));
                    var_48 = ((/* implicit */_Bool) min((var_48), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_26 [i_7] [i_12 - 1] [i_12 - 1])) : (((/* implicit */int) var_12))))) || (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_26 [i_7] [i_12 - 1] [i_12 - 1]))))))));
                    var_49 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)32765))) + (((8930289821885008838LL) << (((((/* implicit */int) (signed char)84)) - (84)))))));
                    var_50 = ((_Bool) min((((long long int) (signed char)-21)), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-84)) * (((/* implicit */int) arr_43 [i_7] [i_7] [i_13] [(unsigned short)8] [i_15])))))));
                }
            }
            var_51 &= ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_43 [i_7] [i_12] [(_Bool)1] [(_Bool)0] [i_12]))))) ? (((/* implicit */int) min(((_Bool)1), (arr_34 [i_12 - 1] [i_12 - 1] [(signed char)0])))) : (((/* implicit */int) arr_25 [i_7] [i_12 - 1]))));
        }
        /* vectorizable */
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
        {
            var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)63876)) ? (((/* implicit */int) (unsigned short)9646)) : (((/* implicit */int) (_Bool)1))))) : (7855236914875810884LL)));
            arr_52 [i_7] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)116))) : (((((/* implicit */_Bool) (short)-24392)) ? (7431132468660467977LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
        }
    }
    var_53 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26024)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_16)) : ((+(((/* implicit */int) (signed char)-37))))))));
    var_54 = ((/* implicit */unsigned short) var_0);
    var_55 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) <= (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)65))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_9))))) : (7855236914875810889LL)))));
}
