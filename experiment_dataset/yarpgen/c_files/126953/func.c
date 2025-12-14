/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126953
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) min(((-(var_0))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)2))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (arr_2 [i_0])))), (((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0])) - (((/* implicit */int) var_1))))) / (var_4)));
                arr_9 [i_0] [i_0] = ((/* implicit */int) arr_7 [i_0] [i_0]);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_12 = ((/* implicit */signed char) ((int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)4)))))));
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))) ^ (max((max((((/* implicit */unsigned long long int) var_5)), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_4) : (var_4))))))));
                arr_15 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_9)), (var_5)))) : ((~(var_4)))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_13 = ((/* implicit */signed char) max((min(((short)-1), (((/* implicit */short) (_Bool)1)))), (max((((/* implicit */short) (_Bool)1)), ((short)0)))));
                arr_18 [i_4] [i_1] = min((max((((/* implicit */short) (_Bool)1)), ((short)24576))), (((/* implicit */short) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (_Bool)1))))) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_4]))))));
            }
            arr_19 [i_1] = ((/* implicit */unsigned int) var_4);
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 21; i_5 += 1) 
            {
                for (unsigned int i_6 = 3; i_6 < 23; i_6 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) arr_11 [i_6] [i_5 + 2] [i_1] [(unsigned short)1]);
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */short) var_1)), (var_9))))) ? ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_5] [(_Bool)1] [i_5]))))), (arr_21 [i_5] [i_5] [i_5 + 2])))))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) (!(((((/* implicit */int) arr_11 [i_0] [i_0] [i_5] [i_0])) != (((/* implicit */int) var_1))))))) == ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1))))))));
                        }
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_12 [i_0] [i_0] [i_0] [i_0])))))))) > (max((((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)15)), ((unsigned short)65535)))), ((~(var_4)))))));
        }
        arr_27 [i_0] = ((signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
    }
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((7) ^ (((/* implicit */int) (short)1))))), (((((/* implicit */_Bool) 26)) ? (((/* implicit */unsigned int) 0)) : (4294967295U)))))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (min((281474909601792ULL), (((/* implicit */unsigned long long int) 4294967295U))))))));
    /* LoopNest 2 */
    for (long long int i_8 = 2; i_8 < 13; i_8 += 2) 
    {
        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            {
                var_19 += ((/* implicit */unsigned short) (!((_Bool)1)));
                arr_32 [i_8] = ((/* implicit */short) (-(min(((~(((/* implicit */int) (signed char)-106)))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_23 [i_9] [i_8] [i_8] [i_8] [i_8])), (var_6))))))));
                var_20 = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) arr_26 [i_8 + 1])), (((unsigned long long int) arr_25 [i_8]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_3))));
}
