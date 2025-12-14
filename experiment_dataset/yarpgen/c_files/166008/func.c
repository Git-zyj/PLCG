/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166008
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned int) (unsigned char)82)), (109741556U)))));
                var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1824935890434070067LL)) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (unsigned char)255))))) : (((((/* implicit */_Bool) (short)3520)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) / (var_0)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))));
                            var_16 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-4))))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0])) : ((-(((/* implicit */int) (unsigned short)16733))))))), (max((-1824935890434070068LL), (((/* implicit */long long int) 1265931968U))))));
                            arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_0))));
                        }
                    } 
                } 
                var_18 += ((/* implicit */int) ((((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (signed char)63))))) >> (((((/* implicit */int) (unsigned short)62070)) - (62048))))) <= (((/* implicit */int) (short)17492))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (((_Bool)1) ? (-6118176735294141679LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_20 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (signed char i_4 = 2; i_4 < 15; i_4 += 2) 
    {
        for (int i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 3; i_8 < 14; i_8 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */int) min((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned short)3465)))), (((((/* implicit */_Bool) arr_22 [i_4 - 1] [i_4] [i_6] [2LL] [i_4 - 1])) && (((/* implicit */_Bool) arr_12 [i_4] [i_7]))))));
                                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_4 - 1] [i_4] [i_4] [i_4])) ? (arr_22 [i_4] [i_4 - 2] [i_8] [i_8 - 1] [i_8 - 3]) : (arr_22 [i_4] [i_4 + 1] [i_4] [i_8] [i_8 - 3]))))));
                                var_23 = ((/* implicit */short) min((((/* implicit */int) arr_21 [14LL] [i_5 + 2] [i_6] [i_5 + 2] [i_7] [i_8])), (-1886564236)));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_22 [i_8 - 2] [i_8 + 1] [i_8 - 3] [i_8 - 2] [i_8 - 3]) % (((/* implicit */int) arr_12 [i_4 - 1] [i_4 + 1]))))) ? (((((/* implicit */_Bool) (unsigned short)62070)) ? (((/* implicit */int) (unsigned char)97)) : ((-(((/* implicit */int) var_3)))))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)176)), ((short)3319))))));
                            }
                        } 
                    } 
                    arr_25 [(_Bool)1] = ((/* implicit */short) (((_Bool)1) && ((_Bool)1)));
                    arr_26 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                    var_25 = max((((/* implicit */int) (!(arr_15 [i_4 - 2] [i_5 + 4])))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)63))))) ? (max((((/* implicit */int) (_Bool)1)), (-1597254224))) : (((((/* implicit */int) (unsigned char)175)) % (((/* implicit */int) var_12)))))));
                }
            } 
        } 
    } 
}
