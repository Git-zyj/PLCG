/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116805
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
    var_15 = ((/* implicit */unsigned long long int) (unsigned short)15259);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 20; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */signed char) arr_1 [i_1] [i_0]);
                            arr_12 [i_0 - 2] [i_1 + 1] [i_0] [(_Bool)1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((unsigned short) 643376118U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1565610882332180390LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15259))) : (24576U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) -328557679)) : (24576U)))) : (((((/* implicit */_Bool) -1565610882332180390LL)) ? (((/* implicit */long long int) 643376143U)) : (1565610882332180410LL)))))));
                            var_17 = ((/* implicit */unsigned char) arr_4 [i_1] [i_3] [i_4]);
                            var_18 = ((/* implicit */unsigned int) var_13);
                        }
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) -1565610882332180427LL)) || (((/* implicit */_Bool) 1444741507)))))));
                        var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -1565610882332180390LL)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) var_13))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) 1565610882332180410LL);
                        /* LoopSeq 1 */
                        for (int i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            arr_25 [i_0] [i_0] [i_6] [i_8 + 1] [i_0] [i_8] [i_0] = ((/* implicit */_Bool) 1539513945U);
                            var_21 = (+((+(((((/* implicit */_Bool) 4294942719U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2262468670U))))));
                        }
                    }
                } 
            } 
        } 
        arr_26 [i_0] [i_0] = ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) : (var_14))) + (9223372036854775807LL))) << (((((/* implicit */int) ((_Bool) var_9))) - (1)))))) ? (((/* implicit */unsigned int) ((int) (+(((/* implicit */int) arr_22 [i_0] [i_0 + 3] [i_0 + 1] [i_0] [i_0])))))) : ((+(arr_20 [13ULL] [14LL] [i_0 + 4] [i_0 - 1] [i_0] [(unsigned char)7]))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) var_13)))))) < (((/* implicit */int) var_3))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((unsigned short) (+(((/* implicit */int) var_13)))))));
        arr_29 [i_9] = ((/* implicit */unsigned int) (((((~(0))) + (2147483647))) << ((((((~(((/* implicit */int) (unsigned char)0)))) + (21))) - (20)))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_34 [i_10] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)-115)))) - (((/* implicit */int) arr_32 [i_10]))));
        arr_35 [i_10] = ((/* implicit */int) -1565610882332180411LL);
        var_24 *= ((/* implicit */unsigned char) (signed char)25);
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [3U] [i_10]))) <= (min((((((/* implicit */_Bool) var_5)) ? (3793683186U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)224)))))));
        arr_36 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (unsigned char)4))))) ? ((-(((/* implicit */int) (unsigned char)230)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37393))) != (21ULL))))));
    }
}
