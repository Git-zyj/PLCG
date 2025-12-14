/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109882
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
    var_10 = ((/* implicit */unsigned int) (short)26200);
    var_11 = var_8;
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)155)))))))), ((~(((/* implicit */int) (signed char)-102))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)127)))));
                    var_14 = ((((((var_3) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)21))))))) != (min(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)129)) | (((/* implicit */int) (_Bool)1))))))));
                    var_15 = ((/* implicit */signed char) var_5);
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_1)), ((unsigned short)25733)))))))) * (var_0)));
                }
            } 
        } 
        arr_8 [i_0 + 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(4294967295U)))), (max((((/* implicit */unsigned long long int) 23U)), (16915744088071915980ULL)))));
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_13 [(unsigned char)4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)100)), (((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) / (max((((-2289516128938052194LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)13)))))))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
            {
                arr_18 [i_3] [i_4] [8U] = (unsigned char)97;
                arr_19 [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) (((~(9223372036854775780LL))) + (((/* implicit */long long int) 23U))));
            }
            for (long long int i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
            {
                arr_23 [i_6] [13ULL] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)137)) * (((/* implicit */int) (unsigned char)70)))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 15; i_7 += 3) 
                {
                    for (long long int i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        {
                            arr_29 [i_3] [i_4] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (!((_Bool)1)))))), ((+(((/* implicit */int) (_Bool)1))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10045)) << (((((/* implicit */int) (unsigned char)120)) - (103)))))) || (((/* implicit */_Bool) (unsigned short)10045))));
                            var_18 = ((/* implicit */unsigned int) ((var_3) / (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)199)))))));
                            arr_30 [0] [(unsigned short)7] [15LL] [8] [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)174)), (var_6)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned char)138)))) : (((((/* implicit */int) var_8)) % (((/* implicit */int) (short)-26538))))))));
                        }
                    } 
                } 
                arr_31 [(signed char)9] [0U] [16] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)127))))) : (((long long int) (unsigned char)255))))));
                var_19 = ((/* implicit */long long int) var_5);
            }
            /* vectorizable */
            for (long long int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_10 = 3; i_10 < 17; i_10 += 1) 
                {
                    arr_37 [i_3] [i_4] [i_10] [i_4] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)127)) == (((/* implicit */int) (_Bool)1))));
                    arr_38 [i_10 + 2] [i_10] [i_10] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) 2363549003628404395LL)))));
                }
                for (long long int i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    arr_42 [i_3] [i_4] [i_9] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (-(6153916963727936880LL)));
                    arr_43 [i_3] [i_3] [(signed char)14] [i_11] = ((/* implicit */signed char) ((2341970225718901975LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116)))));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    for (unsigned short i_13 = 2; i_13 < 17; i_13 += 4) 
                    {
                        {
                            arr_48 [7U] [7U] [7U] [i_4] [i_4] [7U] [(unsigned char)10] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64586))) | (var_7))) >> (((6249227621155028734LL) - (6249227621155028730LL)))));
                            arr_49 [i_3] [7ULL] [i_9] [i_12] [7ULL] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-16))));
                            arr_50 [(signed char)10] [(signed char)10] [i_9] [i_12] [i_13 - 1] = ((/* implicit */unsigned long long int) ((unsigned int) (+(598340517U))));
                            arr_51 [5LL] [5LL] [5LL] [i_12] [i_13] = ((/* implicit */signed char) 4172591403U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_14 = 2; i_14 < 17; i_14 += 2) 
                {
                    for (unsigned char i_15 = 2; i_15 < 18; i_15 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)64582))));
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)29))));
                        }
                    } 
                } 
            }
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)28672)) != ((((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) var_2))))));
            arr_58 [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)119)), ((unsigned char)129))))));
        }
        for (long long int i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            arr_63 [i_16] [(signed char)16] [i_3] = ((((/* implicit */_Bool) -5010164013006318395LL)) || ((_Bool)1));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)60606)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (2945666808U))))) : (((((/* implicit */long long int) ((/* implicit */int) ((8U) < (3732840941U))))) / ((+(-2453753505266725987LL)))))));
        }
        var_24 = ((/* implicit */unsigned short) 598340517U);
    }
}
