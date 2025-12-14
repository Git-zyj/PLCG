/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1429
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned char) (-(arr_1 [i_0 - 1])));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((_Bool) arr_5 [i_0 + 2] [i_0] [i_0 - 2])))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)0)))))))));
                        arr_12 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (((!((_Bool)1))) ? ((~(((/* implicit */int) (short)2407)))) : (((/* implicit */int) arr_8 [i_3 + 1] [i_1]))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        for (short i_5 = 2; i_5 < 21; i_5 += 1) 
        {
            {
                arr_17 [i_4] = ((/* implicit */_Bool) ((int) (unsigned short)61933));
                var_21 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) ((_Bool) (_Bool)1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (int i_7 = 1; i_7 < 20; i_7 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) (_Bool)1)) : (127))) < (max((((/* implicit */int) ((unsigned char) (unsigned short)1242))), (((((/* implicit */_Bool) 975764)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)6353))))))));
                arr_23 [11U] [i_6] = ((/* implicit */_Bool) max((((/* implicit */int) min((arr_22 [i_6]), (var_7)))), (((((/* implicit */_Bool) (~(arr_13 [i_7])))) ? (max((arr_13 [i_6]), (((/* implicit */int) (short)31252)))) : (((/* implicit */int) arr_22 [i_6]))))));
                var_23 += ((/* implicit */unsigned int) (short)9544);
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((max((3113334154U), (((/* implicit */unsigned int) arr_16 [i_6] [i_7 + 1] [i_6])))), (((/* implicit */unsigned int) min((1995017405), (1081201509)))))))));
                arr_24 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((975764) == (((/* implicit */int) (_Bool)1)))) ? (min((-1995017406), (2147483647))) : (-1073741824)))) && (((/* implicit */_Bool) (unsigned short)53630))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) -1995017420)) || (((/* implicit */_Bool) 415948020U)))))))) : (((((/* implicit */_Bool) ((unsigned int) (unsigned char)95))) ? ((((_Bool)1) ? (var_17) : (((/* implicit */long long int) 675111684)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_14)), ((unsigned char)74)))))))));
}
