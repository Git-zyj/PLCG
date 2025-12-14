/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115722
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            var_17 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) -1320748526)) > (-7592963325490149740LL))))))) : (arr_2 [i_0] [i_1 + 1]));
            /* LoopSeq 1 */
            for (signed char i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                arr_7 [i_2] [i_0] [i_0] = (-(((((/* implicit */_Bool) arr_5 [i_2] [i_1 - 3] [i_1] [i_1])) ? (arr_2 [i_0] [i_2]) : ((-(18446744073709551605ULL))))));
                var_18 = min((min((max((((/* implicit */unsigned long long int) (signed char)29)), (arr_2 [i_2] [i_1]))), (((/* implicit */unsigned long long int) ((3507512914U) >> (((/* implicit */int) arr_1 [i_0] [i_1 - 3]))))))), (max((18446744073709551612ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7592963325490149748LL)) ? (((/* implicit */long long int) 4294967294U)) : (137778446610958046LL)))))));
            }
        }
        var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))) - (min((arr_4 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) 4291254831U))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)15524))))) : (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)12712))) > (((long long int) -7592963325490149749LL))))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) /* same iter space */
    {
        var_21 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) -7592963325490149749LL))));
        arr_12 [i_3] = ((/* implicit */unsigned int) ((arr_9 [i_3] [i_3]) != (arr_9 [i_3] [i_3])));
    }
    for (unsigned short i_4 = 1; i_4 < 18; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
        {
            var_22 &= ((/* implicit */_Bool) (+((((~(-8222503441679784870LL))) << (((((min((((/* implicit */long long int) (short)17224)), (-7592963325490149758LL))) + (7592963325490149804LL))) - (46LL)))))));
            var_23 |= ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) 9256087031839722510ULL)) ? (-5583012836926794539LL) : (((/* implicit */long long int) ((/* implicit */int) (short)3840)))))))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_17 [(unsigned char)12]))));
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (unsigned int i_7 = 1; i_7 < 17; i_7 += 4) 
                {
                    for (signed char i_8 = 1; i_8 < 18; i_8 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (!(((min((((/* implicit */unsigned long long int) var_4)), (4417052263819340949ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_8])))))))))));
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [0ULL] [i_6] [0ULL] [i_8]))))) ? (arr_14 [i_4]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                            var_27 = ((/* implicit */unsigned char) max((7592963325490149748LL), (((((/* implicit */_Bool) arr_14 [i_4])) ? (arr_18 [i_4 + 2] [i_4] [i_7 + 2] [i_8 - 1]) : (arr_18 [i_4 + 1] [i_4] [i_4] [i_7])))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
        {
            arr_29 [i_4] [i_9] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -7089957214807468498LL)) ? ((+((+(4417052263819340967ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)17219))) + (-3218060685888174841LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))) + (11856552908743865312ULL))) : (min((arr_9 [i_4] [i_4]), (((/* implicit */unsigned long long int) (signed char)-5))))))));
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    for (short i_12 = 3; i_12 < 17; i_12 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned char)143))))), ((~(((((/* implicit */_Bool) 6160421764438730066ULL)) ? (5300759609904364365LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41449)))))))));
                            var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) (_Bool)1)))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1709834324)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_35 [i_12 + 3] [i_12] [i_12 - 2] [i_12] [i_12] [i_12] [i_12])) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_10 [i_10])))) / (min((arr_26 [13] [i_10]), (((/* implicit */long long int) arr_8 [i_11]))))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                for (short i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    for (long long int i_16 = 1; i_16 < 19; i_16 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)6278))))) <= (min((14ULL), (((/* implicit */unsigned long long int) (short)-26394)))))))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48049))) == (9190657041869829105ULL))) ? (((/* implicit */int) max(((short)3), (((/* implicit */short) (unsigned char)243))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_15] [i_4])))))))) ? (((((/* implicit */_Bool) arr_32 [i_4])) ? (arr_32 [i_4]) : (arr_32 [i_4]))) : (((((/* implicit */int) (short)-3841)) % (((/* implicit */int) (unsigned short)17486))))));
                            var_33 ^= ((/* implicit */signed char) ((((min((((/* implicit */unsigned long long int) (short)-32290)), (arr_15 [i_14] [i_13] [i_14]))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-69))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_4 + 2] [i_13])) ? (arr_8 [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227)))))), (6634947819943067343ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)15))))), (min((var_2), (((/* implicit */unsigned int) var_7)))))))));
                        }
                    } 
                } 
            } 
            var_34 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            var_35 = ((/* implicit */long long int) 110644433);
        }
        for (signed char i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    {
                        arr_56 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17112760320LL)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (unsigned short)48041)))))));
                        var_36 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) min((1577950106U), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) min((((/* implicit */short) arr_52 [i_4] [i_17] [i_19])), (var_0)))) : (((/* implicit */int) (!((_Bool)1)))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (!((!(((/* implicit */_Bool) (signed char)-69)))))))));
        }
        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) min((min(((-(arr_13 [i_4 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_4 - 1]))) != (arr_44 [18U] [i_4 - 1] [i_4] [i_4] [i_4] [18U])))))), (((/* implicit */unsigned long long int) (-(var_5)))))))));
    }
    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((18446744073709551611ULL) >> (((-3411767065587021625LL) + (3411767065587021627LL))))))));
}
