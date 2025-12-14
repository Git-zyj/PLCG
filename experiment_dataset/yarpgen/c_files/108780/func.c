/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108780
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)25838)), (((unsigned long long int) (unsigned short)768))))) || ((_Bool)0)));
    var_12 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 15619465827512230836ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)765))) : (((15619465827512230833ULL) / (16383985371969022795ULL))))), (((/* implicit */unsigned long long int) 19U))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30937)) ? (((/* implicit */int) (unsigned short)4)) : (arr_0 [i_0])))), (((((/* implicit */_Bool) (unsigned short)24456)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-5570))) / (1312285573614095750LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), ((unsigned short)14113)))))))));
        var_14 = ((/* implicit */_Bool) (short)28524);
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)25))));
        var_15 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) (short)5578)), (16U))) >> (((/* implicit */int) ((min((arr_2 [i_1]), (var_5))) && (((/* implicit */_Bool) min((((/* implicit */int) (short)1023)), (-175876706)))))))));
        var_16 = ((/* implicit */int) arr_4 [i_1]);
        var_17 = var_1;
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 4) 
            {
                {
                    arr_15 [i_3] [(_Bool)0] &= ((/* implicit */short) arr_13 [i_2] [i_3 + 1] [i_4]);
                    var_18 = ((/* implicit */short) min((((((((/* implicit */_Bool) 274877906943ULL)) && (((/* implicit */_Bool) 1409106717U)))) ? (((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)64601)))) : (((/* implicit */int) (((_Bool)1) && (var_0)))))), (((((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (short)-30512)) : (((/* implicit */int) (unsigned char)229)))) | (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                }
            } 
        } 
    } 
}
