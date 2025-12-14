/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130348
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [21ULL] [i_1] [i_1] [(unsigned char)21] [5U] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-12106)) || (((/* implicit */_Bool) (short)17452)))), (max(((_Bool)0), ((_Bool)1)))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)12))))), (max((2146084206U), (((/* implicit */unsigned int) (short)18755))))))));
                                arr_14 [i_0] [i_1] [4] [i_4] = ((/* implicit */short) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (short)29881))))), (max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (4228834904U))))) >= (((/* implicit */unsigned int) min((((/* implicit */int) max(((short)29881), ((short)29881)))), (((((/* implicit */_Bool) 6188467066519421979ULL)) ? (((/* implicit */int) (short)21429)) : (1627439999))))))));
                                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((/* implicit */_Bool) min((min((5ULL), (((/* implicit */unsigned long long int) (signed char)-13)))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)105))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) (_Bool)1))))) || (((((/* implicit */_Bool) -1627439999)) && ((_Bool)1)))))) : (max((((/* implicit */int) min(((signed char)-115), (((/* implicit */signed char) (_Bool)0))))), (min((1627439998), (((/* implicit */int) (_Bool)0)))))))))));
                                var_11 = ((/* implicit */short) min((max((((((/* implicit */_Bool) 1627439999)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)121)))), (((((/* implicit */_Bool) (short)1016)) ? (1652582775) : (773723276))))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)54)), ((unsigned char)67))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_12 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (18174024225388759916ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)0)), ((short)-14727))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (unsigned char)183)) : (773723276)))) ? ((((_Bool)0) ? (((/* implicit */int) (signed char)-37)) : (-359964672))) : (((/* implicit */int) min(((short)1006), (((/* implicit */short) (unsigned char)29)))))))) : (((((((/* implicit */int) (signed char)-33)) > (((/* implicit */int) (unsigned char)147)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)1017), (((/* implicit */short) (unsigned char)1)))))) : (((((/* implicit */_Bool) -1236442759)) ? (1100564833U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                                var_13 -= max((((((/* implicit */_Bool) max((16203391985844050449ULL), (((/* implicit */unsigned long long int) (signed char)31))))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)-8351)) : (-821784659))) : (max((-344758004), (((/* implicit */int) (unsigned char)225)))))), (((((/* implicit */_Bool) max(((unsigned char)121), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) min(((signed char)(-127 - 1)), ((signed char)120)))) : (((/* implicit */int) max(((unsigned char)233), (((/* implicit */unsigned char) (signed char)74))))))));
                                var_14 &= ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 773723276)) ? (((/* implicit */int) (_Bool)1)) : (-1627440018)))) - (min((((/* implicit */unsigned long long int) (signed char)-57)), (17179860992ULL))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1U) << (((1627440018) - (1627439998)))))) ? (((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)154)))) : (((/* implicit */int) max(((short)7042), (((/* implicit */short) (signed char)121)))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) max((max((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))), (max((((/* implicit */int) (unsigned char)142)), (1627440018))))), (max((((/* implicit */int) max(((signed char)-22), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */_Bool) 1627440018)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (unsigned char)126))))))));
                }
            } 
        } 
    } 
    var_15 = (_Bool)1;
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 23; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 24; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (int i_10 = 2; i_10 < 22; i_10 += 4) 
                    {
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((773723282), (((/* implicit */int) (short)32098))))), (min((4063919083U), (((/* implicit */unsigned int) 1627440018))))))) ? (max((min((2405659960U), (((/* implicit */unsigned int) (short)8)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-59)) && (((/* implicit */_Bool) 2405659960U))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (short)-30768))))) ? (((/* implicit */int) max(((short)0), (((/* implicit */short) (signed char)7))))) : (((((/* implicit */_Bool) (short)28679)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)24725)))))))));
                                arr_36 [i_7] [i_8] [i_9] [i_10] [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)107)) * (((/* implicit */int) (short)8780))));
                                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)11), (((/* implicit */short) (unsigned char)110))))) ? (max((746722431), (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) min(((short)-28672), ((short)17))))))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (unsigned char)107)))), (((-1708797193) - (-1211474780)))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-76))))), (((3146788141U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103)))))))));
                                var_18 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)127)) & (((/* implicit */int) (signed char)-69)))), (((/* implicit */int) (signed char)46))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15462))) : (134217728U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)69)), ((unsigned char)167)))))))));
                                var_19 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)41)) >> (((((/* implicit */int) (signed char)-28)) + (55)))))) ? (((((/* implicit */_Bool) -989601098)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (signed char)59)))) : (((/* implicit */int) ((((/* implicit */_Bool) 4095977555300330566ULL)) && (((/* implicit */_Bool) 20ULL))))))) != (max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)11)))), (((-989601123) % (((/* implicit */int) (signed char)-95))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)16)), (18446744073709551615ULL)));
                var_21 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28680)) * (((/* implicit */int) (short)7644))))), (((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)76), (((/* implicit */signed char) (_Bool)0))))) - (((/* implicit */int) min(((unsigned char)148), (((/* implicit */unsigned char) (signed char)120))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) max((1671508209U), (((/* implicit */unsigned int) (short)-10849))))), (min((18446744073709551595ULL), (((/* implicit */unsigned long long int) 0)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-11)) ? (2802007740U) : (3201900599U))) / (((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3445526360U))))))));
}
