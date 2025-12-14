/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12412
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
    var_13 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)127)) > (243963081))))))));
    var_14 = ((/* implicit */unsigned int) var_2);
    var_15 = var_5;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-6331)) > ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775787LL)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (max((((/* implicit */unsigned long long int) (short)-32755)), (max((4438304171439660664ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))))));
        var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)2044)), (4574886138347942972ULL)))) ? (((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) (short)-6331))))) : (((((/* implicit */_Bool) (unsigned short)3604)) ? (1728443895) : (-162351844)))))) ? ((~(-243963082))) : (((/* implicit */int) (short)-2045))));
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_5 [i_0] [i_1] [i_1 - 3])) > (((/* implicit */int) (short)0)))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_1] [i_1] [i_1 - 3] [i_2]))) : (var_9)));
                        var_20 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (-1728443901) : (((/* implicit */int) (short)-32766))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)27057)), ((unsigned short)3609)))) : (((((/* implicit */_Bool) (unsigned short)3604)) ? (((/* implicit */int) (unsigned short)61931)) : (((/* implicit */int) (short)2035))))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_11 [i_1 + 1] [i_1 + 1] [i_2] [i_2] [i_2])))) ? (((int) (short)0)) : (((/* implicit */int) min(((short)17), (((/* implicit */short) (unsigned char)20)))))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((short)-6), ((short)-1))))))) ? (-243963082) : (min(((~(((/* implicit */int) (short)-32757)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_3] [i_1])) : (((/* implicit */int) (unsigned char)2))))))));
                            var_23 &= ((/* implicit */unsigned long long int) (short)6332);
                        }
                    }
                } 
            } 
            var_24 = ((/* implicit */int) (short)0);
        }
    }
}
