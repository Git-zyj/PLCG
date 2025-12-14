/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111755
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
    var_15 = ((/* implicit */signed char) var_7);
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-45))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) : (((((/* implicit */_Bool) var_13)) ? (4294967292U) : (var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((short) -3375531262817552471LL))) : (((/* implicit */int) var_11)))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned short)19138)) >= (((/* implicit */int) (unsigned short)62469))))))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) min((((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (unsigned short)37209)))) * (((((/* implicit */int) (short)24845)) - (((/* implicit */int) (_Bool)1)))))))));
                    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2))))) << (((min((((/* implicit */long long int) var_1)), (-6074484625583308015LL))) + (6074484625583308016LL))))), ((~(794867090)))));
                }
                for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((unsigned long long int) ((((/* implicit */_Bool) 2259455686U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)245))))))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) min(((~(((/* implicit */int) (signed char)-114)))), (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-30465))))))));
                }
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_1))))) : (((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)197)), (var_8)))) + (((/* implicit */int) var_9))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            arr_17 [2] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_2)) % (((/* implicit */int) (_Bool)1))))), (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) (short)-10458))))))) : (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) (unsigned short)1536))))) ? (((((/* implicit */long long int) 3025518624U)) / (-3858048991763315575LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1335246632U))))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (18446744073709551609ULL)))), ((~(((/* implicit */int) var_11)))));
                        }
                        var_22 = ((/* implicit */long long int) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (short)16936)) <= (((/* implicit */int) var_3)))))));
                    }
                }
                arr_19 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 195800735U)) ? (9223372036854775807LL) : (1709204919955224639LL)))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) -1LL)) ? (var_0) : (((/* implicit */unsigned long long int) 4294967295U)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))));
                var_23 ^= ((/* implicit */short) (!((_Bool)0)));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)100)) != (-972238105)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))) * (var_13)));
}
