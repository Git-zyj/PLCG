/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126973
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
    var_14 = max((793539817U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) (unsigned char)12))))) < (((((/* implicit */_Bool) 3755782828U)) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_15 ^= ((/* implicit */int) ((((/* implicit */long long int) ((int) (_Bool)1))) >= (((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_1)))))));
            var_16 = ((/* implicit */unsigned char) ((((1601811199047876081LL) - (((/* implicit */long long int) ((arr_2 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) << (((arr_2 [i_1]) - (722837648U)))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((unsigned int) 16123173454594986662ULL)) & (((/* implicit */unsigned int) ((/* implicit */int) ((((var_6) && (((/* implicit */_Bool) (unsigned char)93)))) && (((/* implicit */_Bool) ((((((/* implicit */int) (short)-8144)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65535)) - (65531)))))))))))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((6750117126923857752ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2])) | (-1)))))) / (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_7 [(unsigned char)16])))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1601811199047876067LL)) || ((_Bool)1)))) : (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_3 + 1])))))));
                            arr_12 [i_4] [i_4] [i_1] [i_2] [i_3] [i_4] [i_4] = ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_4] [i_4] [i_4] [i_3 + 1] [10LL] [i_3 + 1] [i_4]) != (arr_5 [i_0]))))) >= (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 417299037U)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_0 [i_2]))))), (4237715055U))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */int) ((_Bool) (_Bool)1))) / ((((_Bool)1) ? (9) : (((/* implicit */int) (unsigned char)141)))))) == ((+(((/* implicit */int) (short)-2934)))))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_5 = 3; i_5 < 19; i_5 += 4) 
        {
            for (unsigned int i_6 = 3; i_6 < 18; i_6 += 1) 
            {
                {
                    var_20 -= ((/* implicit */unsigned char) ((min((arr_15 [i_6 + 1] [i_6 + 1] [i_5 - 1]), (arr_15 [i_6 - 2] [i_6 - 2] [i_5 + 1]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)17971))))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) != (1601811199047876081LL))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) var_0);
        var_23 = arr_9 [i_0] [i_0] [i_0] [i_0];
    }
    var_24 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) (short)-2913))))), (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)22717), (((/* implicit */short) (unsigned char)127))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (-1214963232)))))))));
    var_25 = ((/* implicit */unsigned int) var_2);
}
