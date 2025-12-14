/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169010
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) * ((+(arr_2 [i_0] [i_1])))));
            var_12 = ((/* implicit */short) (+(-881368189)));
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 8811885985168271801LL)) ? (((/* implicit */int) (short)-24890)) : (((/* implicit */int) (short)24576)))))));
            var_14 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned short)43363)))));
        }
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned short)15))))))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            for (unsigned short i_4 = 4; i_4 < 16; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) -8107679603930947168LL);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), ((unsigned short)26730)));
                                arr_16 [i_2] [i_3] [i_2] [4U] = ((/* implicit */unsigned char) ((int) (short)16383));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) -1326424741))));
                                arr_17 [i_3] = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)63)) + (((/* implicit */int) (unsigned short)48812))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (short)5561))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44706))) : ((~(var_6))))), (((/* implicit */unsigned int) ((int) arr_10 [i_2] [(unsigned char)10] [(unsigned char)10] [i_2])))));
    }
    var_20 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) min(((short)0), (((/* implicit */short) (signed char)96))))) : ((+(((/* implicit */int) (short)-1654)))))))))));
        var_22 = ((/* implicit */int) arr_3 [i_7]);
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_7] [(unsigned short)2] [(signed char)12] [(unsigned short)2])) ? ((-(-1039405213))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_7])) ^ (((/* implicit */int) arr_10 [i_7] [10LL] [i_7] [i_7]))))) == (1080863910568919040LL)))))))));
    }
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_20 [i_8] [i_8])) ? (((/* implicit */int) arr_20 [i_8] [i_8])) : (((/* implicit */int) arr_20 [i_8] [i_8])))) < (((/* implicit */int) ((4294967287U) != (((/* implicit */unsigned int) -1))))))))));
        arr_23 [i_8] = ((/* implicit */short) (-(arr_22 [i_8] [i_8])));
        arr_24 [8LL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-100)) ? (((((/* implicit */int) arr_21 [i_8])) & (((/* implicit */int) (unsigned short)16368)))) : (((/* implicit */int) (signed char)-1))));
    }
}
