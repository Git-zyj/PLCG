/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172601
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)16)) < (((/* implicit */int) (short)(-32767 - 1)))))), (max((((/* implicit */unsigned long long int) var_8)), (var_14))))), (var_12)));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_2);
                    arr_8 [i_0] [i_1 - 3] [i_2] [9U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1 - 2]))))) ? (min((((/* implicit */unsigned long long int) var_4)), (var_17))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1 - 4])))))));
                    var_20 = ((((((/* implicit */_Bool) (short)17949)) ? (((/* implicit */int) var_11)) : (-337710176))) >> (((-1490634215) + (1490634241))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            {
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) ((-337710164) != (((/* implicit */int) (unsigned char)150))))) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) arr_3 [i_3])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31372))))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) min((max(((short)17880), ((short)-31389))), (((/* implicit */short) ((15886134251184608074ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) <= (((((/* implicit */_Bool) 2560609822524943540ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_3] [i_4])))))))));
                arr_13 [2U] [i_4] [2U] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)38750)) | ((-(((/* implicit */int) arr_12 [i_4]))))));
                arr_14 [i_4] [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) var_1)), (var_5))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_10)))))) >> (((min((((((/* implicit */unsigned long long int) var_16)) - (11657636588980323811ULL))), (var_15))) - (6789107488701274716ULL))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((unsigned short) 1363573977U)))));
        arr_18 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15886134251184608074ULL)) ? (((/* implicit */int) (unsigned short)38737)) : (((/* implicit */int) var_1))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_5] [i_5])) != (arr_16 [i_5])));
        arr_19 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        var_26 = ((/* implicit */int) ((-6363642472396804746LL) <= (((/* implicit */long long int) -337710176))));
        var_27 = ((/* implicit */int) min((var_27), (((((min((337710172), (((/* implicit */int) (unsigned short)38732)))) & (((/* implicit */int) ((((/* implicit */int) (signed char)-13)) != (((/* implicit */int) (unsigned char)214))))))) ^ ((((((-(((/* implicit */int) var_8)))) + (2147483647))) >> (((((1816211558U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38754))))) - (1816246109U)))))))));
    }
    var_28 = ((/* implicit */int) var_12);
}
