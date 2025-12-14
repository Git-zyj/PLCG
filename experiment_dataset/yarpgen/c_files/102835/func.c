/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102835
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [(unsigned char)4] [(unsigned char)4] = ((/* implicit */short) (-(((/* implicit */int) (signed char)16))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) != (6479896001081460951ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 1415531437U))));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */int) (~(1415531426U)));
                            var_22 = ((((/* implicit */int) (unsigned short)11)) == (((/* implicit */int) (unsigned short)65535)));
                        }
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] [i_2] [i_5] = ((arr_7 [i_0] [i_0] [i_0]) & (((/* implicit */int) ((6466154540213763297ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
                            arr_18 [i_1] [i_1] [i_2] [i_3] [i_5] [i_2] [i_3] = ((/* implicit */_Bool) 1415531410U);
                        }
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            var_23 &= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)0))));
                            arr_22 [i_0] [i_1] [i_6] [i_3] [i_6] = ((/* implicit */long long int) ((unsigned int) ((unsigned short) var_9)));
                            arr_23 [i_6] [i_1] [i_6] = ((/* implicit */unsigned char) (+(2047689659294479255ULL)));
                            arr_24 [i_6] [(unsigned char)2] [i_6] [i_3] [i_6] [i_1] [i_0] = ((/* implicit */long long int) var_2);
                        }
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_1] [i_1] [4ULL] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) var_2);
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)2047))))) ? (((/* implicit */unsigned long long int) ((long long int) var_14))) : (((unsigned long long int) 589323159)))))));
                            var_25 = ((/* implicit */unsigned short) var_13);
                        }
                        arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_2 [8]))));
                        arr_30 [i_3] = ((/* implicit */int) ((signed char) (+(1823672768))));
                        arr_31 [i_3] [i_3] [i_3] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220))) + (6466154540213763297ULL)));
                    }
                    var_26 = ((/* implicit */signed char) var_4);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            arr_34 [0] [i_8] [8U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -823659728)) ? (-257755437) : (((/* implicit */int) arr_13 [i_8] [i_8] [i_8] [(unsigned char)0] [i_8] [i_0] [i_0]))));
            var_27 ^= ((/* implicit */unsigned int) ((unsigned char) (unsigned char)255));
            var_28 *= ((/* implicit */unsigned char) var_10);
        }
        for (signed char i_9 = 2; i_9 < 9; i_9 += 3) 
        {
            arr_37 [i_0] [i_9] = ((/* implicit */unsigned long long int) (~((~(131071)))));
            /* LoopSeq 4 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_29 -= ((/* implicit */unsigned long long int) ((((arr_8 [i_9] [i_9] [i_9]) == (1047129828))) ? (((-1047129828) - (((/* implicit */int) (unsigned short)5146)))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [4LL] [4LL] [i_0] [(_Bool)1]))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        {
                            arr_44 [i_0] [i_0] [i_9] [i_12] = ((/* implicit */long long int) ((_Bool) (unsigned char)220));
                            var_30 -= arr_25 [i_0] [i_0] [i_0] [i_0] [i_0];
                        }
                    } 
                } 
                var_31 += ((/* implicit */unsigned int) 1587427395);
                arr_45 [i_0] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_9 + 1] [i_9 - 2] [i_9 - 1])) && (((/* implicit */_Bool) var_11))));
            }
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                arr_48 [(_Bool)1] [i_9 - 1] [(_Bool)1] |= ((((((/* implicit */_Bool) -1823672768)) ? (((/* implicit */long long int) 3291821973U)) : (arr_15 [i_0] [(_Bool)1] [i_0] [i_9] [i_13]))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_13] [i_13] [i_9] [i_9] [i_9] [i_9] [i_0])))));
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) (short)17471)) : (((/* implicit */int) ((unsigned short) 1047129842))))))));
                    arr_52 [i_9] [i_9] = ((/* implicit */unsigned char) ((signed char) ((unsigned int) var_17)));
                    arr_53 [i_9] [4U] = ((/* implicit */unsigned short) ((_Bool) -1627466031));
                }
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 2) 
                    {
                        {
                            arr_61 [i_9] = ((/* implicit */_Bool) 1678765883);
                            var_33 ^= ((/* implicit */int) ((((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_40 [(_Bool)1])))) || (((/* implicit */_Bool) var_15))));
                            var_34 = ((/* implicit */short) ((((/* implicit */int) arr_51 [5ULL] [i_0] [i_9] [i_0])) ^ (((/* implicit */int) var_3))));
                            var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (1241477514) : (((/* implicit */int) (unsigned short)30644))))) ? (((unsigned int) -1047129844)) : (4042445368U)));
                        }
                    } 
                } 
                arr_62 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_59 [i_15] [9U] [i_9 - 1] [i_0]))));
            }
            for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 2) 
            {
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((int) (signed char)-73)))));
                var_37 = ((/* implicit */int) var_1);
            }
        }
        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((var_6) << (((((((/* implicit */_Bool) -1823672765)) ? (-1047129845) : (((/* implicit */int) arr_64 [i_0] [i_0] [(_Bool)0])))) + (1047129864))))))));
    }
    for (long long int i_19 = 0; i_19 < 16; i_19 += 4) 
    {
        arr_69 [i_19] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)5143)) > (-257755437)));
        var_39 = ((/* implicit */_Bool) var_18);
    }
    var_40 ^= ((/* implicit */unsigned int) ((_Bool) 2147483647));
}
