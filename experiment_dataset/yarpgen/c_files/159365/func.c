/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159365
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
    var_10 = ((((((/* implicit */_Bool) (short)-23715)) || (((/* implicit */_Bool) -1603260324)))) ? (((/* implicit */int) var_2)) : (((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)42848)) && (((/* implicit */_Bool) (short)-23717))))) : (((/* implicit */int) ((unsigned char) (_Bool)1))))));
    var_11 &= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((-1603260324) <= (846279416))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) var_2))));
    var_12 = ((/* implicit */unsigned char) ((max((((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (short)23688)))), (((/* implicit */int) (unsigned short)42834)))) % (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */short) arr_11 [i_3] [(unsigned char)9] [i_3]);
                            arr_13 [(unsigned short)14] [i_3] [7] [i_3] [(unsigned short)14] = ((/* implicit */int) ((((/* implicit */_Bool) (~(1603260314)))) ? ((~(arr_6 [i_0] [(_Bool)1]))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_6 [i_2] [i_3]) : (arr_6 [i_2] [i_1])))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)23716))) ^ (-3095883796864712007LL)));
                arr_15 [i_0] [i_0] [i_1] &= (((+((-(((/* implicit */int) (short)-19944)))))) | (((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */int) min(((short)-23712), ((short)23688)))) : (((/* implicit */int) (short)23688)))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 4; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_0] [i_4] [i_4] [i_4] [i_6]))))))));
                                arr_22 [i_0] [(signed char)6] [i_4] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1603260324), (((((/* implicit */_Bool) 67043328)) ? (398426885) : (667106318)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */int) arr_19 [i_6 + 4] [i_6 + 1] [i_6 - 2] [i_4] [i_6 + 1])) + (((/* implicit */int) (short)32748))))));
                                arr_23 [i_4] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)39506)) : (((/* implicit */int) (signed char)-14))));
                            }
                        } 
                    } 
                } 
                arr_24 [i_1] [4] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned char)250))))))));
            }
        } 
    } 
}
