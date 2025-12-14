/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170942
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) (unsigned char)59)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [9LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1099511627768ULL)) ? (arr_2 [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 1099511627768ULL)) ? (arr_0 [i_1]) : (18446742974197923848ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 1099511627760ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0]))) : (arr_2 [i_1] [i_0] [i_0]))))));
            var_17 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) >= (arr_2 [i_0] [(_Bool)1] [i_0])))) << (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2623145176U)))))));
            arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-32))))) - (((/* implicit */int) var_10))));
        }
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    var_18 *= (((!(((/* implicit */_Bool) (short)-1)))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)5472)) >> (((((/* implicit */int) (short)-1)) + (17))))) & ((~(((/* implicit */int) (short)7))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) arr_1 [i_3]))))) ? ((-(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 7; i_4 += 1) 
                    {
                        for (short i_5 = 1; i_5 < 9; i_5 += 2) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned char) (_Bool)1);
                                arr_17 [i_0] [i_2] [i_3] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((arr_11 [i_4 + 2] [i_4 + 3] [i_4 + 3] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned int) (unsigned short)980)), (262136U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_4]))))) / (((/* implicit */int) ((short) var_10))))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (short)-1))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))) : ((+(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) -346609777585658270LL)) : (13801374714480306470ULL)))))));
                }
            } 
        } 
    }
    var_20 -= ((/* implicit */long long int) (-(134217216)));
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) -346609777585658257LL)))))));
    var_22 = ((/* implicit */signed char) var_14);
}
