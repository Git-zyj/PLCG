/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142651
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
    var_12 = var_11;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_2]);
                    var_13 = ((/* implicit */int) (~(max((var_11), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_13 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_5 [i_1] [(short)22])))) ? (min((((((/* implicit */_Bool) (signed char)76)) ? (1125899906842624ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) (+(1485983570U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_6 [i_0] [i_1] [i_1 + 1])), (var_10)))))));
                        arr_14 [i_0] [i_0] [i_1 + 1] [i_1] [i_2] [i_3] = (+(((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)250)), (var_5)))) ? (arr_8 [i_1 + 1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)16)))))))));
                        var_14 -= ((/* implicit */short) (((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (534773760))))) ^ (((/* implicit */int) var_9))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 3; i_4 < 20; i_4 += 2) 
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (((8985648899851338260LL) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)20236))) < (18445618173802709010ULL)))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-20216))) & (arr_8 [i_3] [i_2] [i_1 + 2] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46)))));
                            var_15 = ((/* implicit */_Bool) arr_7 [i_0]);
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-23086)) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0 - 3])) - (19281)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) && (((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned char)253))))));
                            arr_20 [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)58)) | (((((/* implicit */_Bool) (~(1125899906842583ULL)))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) var_1))))));
                            arr_21 [i_2] [i_0] [i_2] [i_1] [i_0] [i_2] &= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 2] [i_0] [i_3])) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)1407)))))))));
                        }
                        var_16 = ((/* implicit */short) 1158755871U);
                    }
                }
            } 
        } 
        var_17 -= ((/* implicit */short) var_4);
        var_18 = ((/* implicit */short) (unsigned char)248);
    }
    for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_6 = 2; i_6 < 20; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (short i_8 = 1; i_8 < 22; i_8 += 3) 
                {
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5] [i_5] [i_7] [i_8]))) : (max((((/* implicit */unsigned long long int) (unsigned short)38612)), (35182224605184ULL)))));
                        arr_31 [i_8] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_27 [i_8]))))))) / (max((arr_17 [i_6] [i_6] [i_6 + 3] [i_6] [i_6]), (((/* implicit */unsigned int) (unsigned char)191))))));
                    }
                } 
            } 
        } 
        arr_32 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (((((+(((/* implicit */int) arr_1 [i_5] [i_5])))) + (2147483647))) >> (((((/* implicit */int) var_6)) + (23278)))))) != (((((/* implicit */_Bool) arr_11 [i_5 + 2] [i_5 - 3] [i_5 - 1] [i_5])) ? ((-(arr_17 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_1)))))))));
    }
}
