/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173276
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
    var_18 = ((/* implicit */signed char) ((var_0) && (((/* implicit */_Bool) max(((~(var_16))), (((/* implicit */int) ((unsigned short) var_16))))))));
    var_19 = ((((long long int) ((((/* implicit */_Bool) var_7)) ? (2908609138U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) : (2908609121U)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = (!(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (arr_0 [i_0]))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_15))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((1386358165U) << (((((/* implicit */int) (short)-32748)) + (32778)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : ((+(((3084889710U) >> (((((/* implicit */int) (signed char)-1)) + (10)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_1])) : (arr_6 [2ULL])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) var_4))))) : (arr_6 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) -7201239397462873733LL);
    }
    for (unsigned short i_2 = 4; i_2 < 9; i_2 += 4) /* same iter space */
    {
        var_22 = ((((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? (arr_9 [i_2 + 1]) : (arr_9 [i_2 - 1]))) * (((arr_9 [i_2 - 1]) - (arr_9 [i_2 + 1]))));
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((arr_0 [i_2 - 4]) / (arr_0 [i_2 - 2]))) == (((/* implicit */unsigned int) (-(((/* implicit */int) var_14)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
        {
            var_23 = ((/* implicit */short) arr_6 [(_Bool)0]);
            var_24 = arr_11 [3] [3];
            var_25 = ((/* implicit */short) ((_Bool) ((unsigned char) ((short) arr_8 [i_2] [i_3]))));
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((unsigned long long int) ((signed char) ((2030912293) ^ (((/* implicit */int) arr_1 [i_3])))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 9; i_4 += 4) 
        {
            for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) 
            {
                {
                    var_27 = ((/* implicit */short) (((~(arr_6 [i_2 - 2]))) - (((((/* implicit */int) arr_1 [i_2 - 2])) >> (((arr_6 [i_2 - 2]) - (647802801)))))));
                    arr_17 [i_2] [i_2] [i_2] [(signed char)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_16) / (((/* implicit */int) (short)-32753))))) + (((2601028576417254148ULL) << (((((/* implicit */int) (short)32751)) - (32691)))))))) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) ((8388606U) << (((var_3) - (4123427474U)))))) ? (((((/* implicit */_Bool) 6588614621514225738ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1284446235732889410LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_4] [0U]))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 7; i_7 += 4) 
                        {
                            {
                                arr_23 [i_2] [i_4] [(short)0] [i_5] [i_6] [1U] [(unsigned short)2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) ((signed char) arr_22 [(unsigned char)1] [(unsigned char)1] [i_5] [i_6] [i_6] [i_6] [(signed char)7]))))));
                                arr_24 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2908609143U))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 2601028576417254148ULL)))))));
                                arr_25 [i_7] [i_6] [i_5] [i_4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 0LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 2147483647)) == (2908609140U))))) ^ (4U)))));
                            }
                        } 
                    } 
                    arr_26 [(unsigned char)5] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (536869888U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) < (15845715497292297465ULL)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_8 = 4; i_8 < 9; i_8 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */short) ((signed char) ((long long int) arr_9 [i_8])));
        var_29 = ((/* implicit */unsigned short) (short)17808);
        arr_30 [(short)4] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_16 [i_8] [5LL] [i_8]) : (((/* implicit */unsigned int) -1343195400)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 4) 
    {
        for (signed char i_10 = 1; i_10 < 13; i_10 += 4) 
        {
            {
                arr_39 [i_9] [i_10] [i_9] = ((/* implicit */long long int) ((unsigned int) var_6));
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (10669505973771648394ULL)))) ? (((((/* implicit */int) var_14)) * (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) 17945705447331089777ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 16; i_11 += 1) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            {
                arr_45 [i_11] [i_11] = ((unsigned int) arr_40 [(_Bool)1]);
                arr_46 [i_11] [i_12] [i_12] = ((/* implicit */unsigned char) var_13);
                var_31 = ((short) var_1);
            }
        } 
    } 
}
