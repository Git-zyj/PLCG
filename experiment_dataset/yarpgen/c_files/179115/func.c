/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179115
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (signed char)-17)) : (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (unsigned char)251))))));
                    arr_8 [i_0] = ((((/* implicit */_Bool) (unsigned short)47814)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))) : (-6335889339473398278LL));
                    arr_9 [4ULL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65521))))) ? (((((/* implicit */_Bool) 16U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65521))) : (17560839944349910878ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : ((-2147483647 - 1)))))));
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (3758100815U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)42)))))) ? (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_2)) ? (6ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) 0U);
                                arr_16 [i_0] [i_0] [2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) 12757852427848507964ULL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_0] = ((((/* implicit */_Bool) (unsigned short)33663)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31946)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_7)) ? (3222009502324279251LL) : (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))));
    }
    for (unsigned int i_5 = 1; i_5 < 7; i_5 += 1) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */int) (signed char)25);
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned short) -965575807);
                            arr_32 [i_5] [i_7] [i_7 - 1] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)1007))));
                        }
                        arr_33 [(_Bool)1] [i_7] [i_6] [i_7 - 1] [i_7 - 1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (-3222009502324279252LL)))) ? (((var_0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)0)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))));
                        /* LoopSeq 4 */
                        for (signed char i_10 = 3; i_10 < 9; i_10 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) var_4);
                            arr_37 [i_5 - 1] [i_6] [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) var_3);
                            arr_38 [(_Bool)1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15957)))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_0)) : ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 965575806)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (14804365926643523648ULL)))) ? (8483308610882985621LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2377690982U)) ? (1287851336U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)25)))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_11 = 3; i_11 < 9; i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_5] [i_5] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */unsigned long long int) var_6);
                            var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)26651)) : (((/* implicit */int) (unsigned char)191)))) : (((/* implicit */int) var_8))));
                            arr_42 [i_5] [(_Bool)1] [i_7] [i_6] [i_7] [(_Bool)1] [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))) : (0LL)));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? ((((_Bool)0) ? (var_5) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        }
                        for (signed char i_12 = 3; i_12 < 9; i_12 += 1) /* same iter space */
                        {
                            arr_45 [i_5] [i_7] = ((/* implicit */unsigned int) (((_Bool)0) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54257))) : (((var_3) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (1967817837771440965LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) (unsigned short)54417)))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((var_8) ? (3724152900U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (-3123677258951423735LL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 0U)) ? (0LL) : (((/* implicit */long long int) 2628246938U)))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 4; i_13 < 8; i_13 += 3) 
                        {
                            arr_49 [i_7 - 1] [i_7] [i_8] [i_7 - 1] [i_6] [i_7] [i_5] = ((/* implicit */_Bool) (unsigned char)182);
                            var_22 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))));
                            arr_50 [i_5] [i_6] [i_7] [i_8] [7LL] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) 0U)) : (var_7)));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            arr_53 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] = ((((/* implicit */_Bool) (signed char)126)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                for (signed char i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    {
                        arr_60 [i_16] [3U] [(_Bool)1] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)0))));
                        arr_61 [i_16] [i_16] = ((/* implicit */unsigned long long int) var_8);
                        var_23 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
            arr_62 [i_14] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)54391)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) (unsigned short)13971)) : (((/* implicit */int) (signed char)63))))) : (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967280U)))));
            arr_63 [i_5 + 3] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-64)));
        }
        /* vectorizable */
        for (unsigned char i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) ((var_6) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-9))));
            arr_66 [i_5 + 2] [i_17] [i_17] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)121))));
            var_25 = ((/* implicit */_Bool) var_9);
            arr_67 [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (_Bool)1))));
        }
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-28)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    }
    var_27 &= ((/* implicit */unsigned short) var_10);
}
