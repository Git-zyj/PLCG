/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173856
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (-(arr_3 [i_0]))))) >> (((((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))) | (max((var_13), (((/* implicit */long long int) arr_5 [i_3] [i_2] [i_1] [i_0])))))) + (39LL)))));
                        arr_10 [i_1] [i_1 + 2] [i_1] [i_1] [i_1 + 4] [i_1 + 4] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? ((~(arr_4 [i_1] [12LL] [i_3]))) : (((long long int) arr_5 [i_3] [i_2] [i_1] [i_0]))))));
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1] [i_2] [i_3]))) >> (((((/* implicit */int) ((unsigned short) -2916377285037941888LL))) - (39807)))))) | (max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-111))))), (min((4294967295U), (((/* implicit */unsigned int) (signed char)-111))))))));
                        var_16 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-32))));
                        var_17 += ((/* implicit */unsigned short) (((+(((((/* implicit */int) (unsigned short)25515)) << (((((/* implicit */int) var_2)) - (53483))))))) + (((/* implicit */int) ((short) ((long long int) arr_5 [i_0] [i_0] [i_2] [i_2]))))));
                    }
                    for (short i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) ((_Bool) (unsigned short)4095))))));
                        var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_1 + 2] [i_2] [i_2 + 4] [i_4] [i_4]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_4 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) -719604164802633884LL)) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned short)25288)))))))) : (((long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 4] [i_4])))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        arr_18 [i_1] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_5)) || ((_Bool)0)))));
                        arr_19 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((arr_4 [i_0] [i_1] [i_2]) >> (((var_4) - (2604116710898792245ULL))))) < (((long long int) arr_2 [i_5] [i_5]))));
                    }
                    for (short i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        var_20 = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_6] [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_14 [i_6] [i_1] [i_1] [i_0] [i_1] [i_0]))))) ? ((+(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23955))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)40247)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)48)) > (((/* implicit */int) (_Bool)1))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_25 [i_1]))))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_2] [i_6] [i_6] [i_1])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-15)))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) (!(arr_13 [i_6] [12] [i_1])))))))));
                        }
                    }
                    var_23 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_3)))) && (max(((_Bool)1), ((_Bool)1))))) ? ((~(((/* implicit */int) max((((/* implicit */signed char) var_10)), ((signed char)95)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [3LL] [i_2 + 4] [i_2])) - (((/* implicit */int) arr_23 [i_1]))))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (((!((_Bool)1))) ? (min((min((-3874374275223427910LL), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) | (-2916377285037941900LL)))) ? (min((((/* implicit */int) (short)3353)), (var_3))) : (((((/* implicit */int) var_10)) | (((/* implicit */int) var_1)))))))));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_11)))) / (((/* implicit */int) ((short) var_5)))))) ? ((+(((int) (-2147483647 - 1))))) : (((((/* implicit */int) (signed char)21)) * ((((_Bool)1) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)18070))))))));
}
