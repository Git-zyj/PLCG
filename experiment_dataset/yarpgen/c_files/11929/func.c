/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11929
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1485563220)) ? (342595738) : ((-2147483647 - 1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) > (2111062325329920ULL)))) : (((((var_3) + (2147483647))) << (((var_1) - (9013967233246934381LL))))))) >> (((((/* implicit */int) (unsigned short)2399)) - (2380))));
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((411631860517225274ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))));
        var_12 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_3)) : (var_4)))) && (((/* implicit */_Bool) max((((/* implicit */int) (short)-17631)), (var_3)))))) ? (((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) arr_1 [i_0] [4])), (arr_7 [1ULL] [1ULL] [i_2]))))) : (var_10)));
                    /* LoopSeq 4 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        var_14 ^= ((/* implicit */int) (~(arr_10 [(unsigned char)4] [i_2 + 2] [i_1] [(unsigned char)4] [(unsigned char)4])));
                        var_15 -= ((/* implicit */unsigned short) var_4);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        var_16 = var_1;
                        arr_16 [i_2] [i_2] = ((/* implicit */_Bool) var_4);
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-50))));
                        var_18 = ((/* implicit */int) min((var_5), ((signed char)(-127 - 1))));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5] [i_1] [i_0]))) : (arr_7 [i_2 - 2] [(short)0] [i_2])))) ? ((-(15145450039589347627ULL))) : (((((/* implicit */unsigned long long int) (+(var_8)))) / (((((/* implicit */_Bool) (signed char)-64)) ? (3301294034120203986ULL) : (15145450039589347627ULL)))))));
                    }
                    for (int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (15145450039589347611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_7 [10] [i_1] [i_6]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [2U])) || (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0] [i_0] [i_6]))))))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) arr_17 [6ULL] [(short)6]);
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_25 [i_0] [i_0] [i_0] [5ULL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(unsigned short)5] [(unsigned short)5] [i_2 - 2] [i_2] [i_2])))))) ? (((/* implicit */int) (unsigned short)63132)) : (min((((/* implicit */int) var_5)), (arr_17 [i_8] [i_7])))));
                                var_23 = ((/* implicit */unsigned int) 15145450039589347629ULL);
                                var_24 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_8] [i_2 + 1] [i_2 + 3] [i_2 - 2] [i_2 - 2]))))) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) arr_5 [i_2 - 3] [i_2] [(signed char)6])));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_31 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -13)) ? (((/* implicit */int) (unsigned short)2408)) : (-677628818)));
    }
    for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 4) 
    {
        var_25 = min((((/* implicit */unsigned long long int) var_1)), (max((18035112213192326340ULL), (((/* implicit */unsigned long long int) var_0)))));
        var_26 ^= ((/* implicit */unsigned long long int) min((min(((short)-32758), (((/* implicit */short) (signed char)46)))), (arr_34 [i_9 + 1])));
    }
    for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        arr_38 [i_10] = ((/* implicit */short) (~(((var_10) >> (((var_1) - (9013967233246934332LL)))))));
        var_27 = ((/* implicit */unsigned long long int) -502146175);
        var_28 = ((/* implicit */unsigned char) min((var_28), ((unsigned char)120)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (int i_14 = 3; i_14 < 20; i_14 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) 3301294034120203999ULL);
                        var_30 = ((/* implicit */short) (unsigned char)216);
                    }
                } 
            } 
        } 
        arr_50 [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16104))) : (arr_47 [i_11] [8LL] [8LL] [i_11] [i_11] [i_11])));
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 17; i_15 += 4) 
        {
            for (unsigned short i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                for (int i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_18 = 2; i_18 < 20; i_18 += 4) 
                        {
                            arr_60 [i_11] [i_15] [i_11] [i_17] [17ULL] [i_15] [17ULL] = ((/* implicit */short) ((unsigned long long int) arr_55 [i_11] [i_11] [(short)17] [i_15 - 1]));
                            var_31 = ((/* implicit */unsigned short) arr_57 [i_15 - 1] [i_18 - 1] [i_18 + 1] [(_Bool)1]);
                        }
                        var_32 = ((/* implicit */short) arr_59 [19] [(unsigned char)14] [18] [(unsigned char)14] [(unsigned char)4] [i_11]);
                        var_33 = 502146151;
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 21; i_19 += 3) 
        {
            for (int i_20 = 0; i_20 < 21; i_20 += 4) 
            {
                for (unsigned short i_21 = 3; i_21 < 19; i_21 += 3) 
                {
                    {
                        arr_69 [i_21 - 1] [i_21] [i_21] [i_21 - 3] [i_11] [i_19] = ((/* implicit */unsigned long long int) (unsigned short)7);
                        arr_70 [i_21 - 2] [i_21] [i_21] [(unsigned char)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [(_Bool)1] [i_19] [i_19])) ? (arr_47 [(unsigned short)4] [i_19] [i_20] [i_21] [i_20] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_11] [i_20] [i_20] [i_21])))));
                        var_34 = ((/* implicit */unsigned int) arr_68 [i_11]);
                    }
                } 
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (var_0)))) ? (((/* implicit */unsigned long long int) var_8)) : (var_4)))));
    /* LoopSeq 2 */
    for (short i_22 = 0; i_22 < 12; i_22 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1970169225)) ? (((/* implicit */long long int) -502146202)) : (8297083323206266939LL)))) ? (((/* implicit */unsigned long long int) (+(502146174)))) : (((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [(signed char)6] [(signed char)6] [i_22] [(unsigned short)3]))) : (2989678244269812482ULL))))), (var_10)));
        var_37 = ((/* implicit */unsigned char) arr_66 [i_22] [i_22] [16LL] [i_22] [(unsigned short)5] [i_22]);
    }
    for (short i_23 = 0; i_23 < 12; i_23 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned char) arr_65 [i_23] [i_23] [i_23] [14LL] [i_23] [i_23]);
        /* LoopNest 3 */
        for (unsigned short i_24 = 0; i_24 < 12; i_24 += 2) 
        {
            for (unsigned long long int i_25 = 0; i_25 < 12; i_25 += 1) 
            {
                for (signed char i_26 = 3; i_26 < 11; i_26 += 1) 
                {
                    {
                        arr_87 [i_25] [i_25] = ((/* implicit */short) min(((+(((/* implicit */int) arr_62 [i_23] [i_25] [i_26])))), (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)192)) <= (((/* implicit */int) var_5))))) : (((/* implicit */int) (unsigned short)38387))))));
                        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((var_1) >= (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_23] [i_24]))))) ? (((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_23] [i_24] [6LL] [i_26]))))) : (max((var_0), (((/* implicit */unsigned int) var_3))))))) ? (18035112213192326324ULL) : (max((((/* implicit */unsigned long long int) (unsigned char)89)), ((~(var_4)))))));
                    }
                } 
            } 
        } 
    }
}
