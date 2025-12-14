/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143712
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
    var_14 = 4739818684400734276LL;
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65514)))) > (max(((~(((/* implicit */int) (unsigned short)65535)))), ((+(((/* implicit */int) (unsigned short)65525)))))))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65523))))) > (((((/* implicit */int) var_13)) - ((-(((/* implicit */int) (unsigned short)26))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned int) ((((((1717276599761765202LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20))))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)65515)))))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19)))));
                                var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (288230367561777152ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11)))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 288248185U)) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) (unsigned short)26)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65514)))))))) ? (min((min((0ULL), (((/* implicit */unsigned long long int) (short)22)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)22)) < (((/* implicit */int) (unsigned char)131))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65523))))), (((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */int) (short)-23)) : (((/* implicit */int) (unsigned short)65517)))))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) (unsigned short)65533)))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned char)139), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65520)))))))) <= (max(((~(((/* implicit */int) (short)-22)))), (((((/* implicit */_Bool) (short)39)) ? (((/* implicit */int) (unsigned short)65514)) : (((/* implicit */int) (unsigned short)9))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) (unsigned char)124)), (1039820177840838828LL))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43917)))))) ? (((((/* implicit */int) max(((short)-39), ((short)22)))) * (((/* implicit */int) (short)22)))) : (((/* implicit */int) (short)43))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (unsigned short)8))));
                            arr_23 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34)) ? (288230367561777144ULL) : (18158513706147774463ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2)) | (((/* implicit */int) (unsigned short)28))))) : ((+(max((((/* implicit */unsigned long long int) (short)27)), (18158513706147774463ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
