/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177924
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
                var_11 = ((/* implicit */int) min((var_11), (((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53345))))) & ((~(((/* implicit */int) arr_1 [(unsigned char)10])))))) * (((/* implicit */int) (((-(3022770936109010225ULL))) <= (((/* implicit */unsigned long long int) -435073539917248920LL)))))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_9))))))))));
                var_12 ^= ((((/* implicit */int) min((((/* implicit */unsigned short) (short)4096)), ((unsigned short)60371)))) | (((((/* implicit */int) (unsigned char)19)) | (((/* implicit */int) (short)4096)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((-626537589), (626537594)));
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
            {
                {
                    arr_17 [i_4] [i_2] [i_4] = ((/* implicit */int) arr_4 [i_2] [i_3] [i_4 + 3]);
                    var_14 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_2) <= (var_8))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (((~(((/* implicit */int) arr_5 [i_2])))) == (max((var_3), (((/* implicit */int) arr_1 [i_2]))))))) : ((~(var_2)))));
                    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_17 = min((((/* implicit */unsigned long long int) (signed char)81)), (274877898752ULL));
                                arr_23 [i_2] [(unsigned char)4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 198133975U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2]))) : (2091560469U)))) ? (9777979355021253534ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_2])))));
                                var_18 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) ^ (2091560452U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
